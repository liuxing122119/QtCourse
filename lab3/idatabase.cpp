#include "idatabase.h"

void IDatabase::initDatabase()
{
    database = QSqlDatabase::addDatabase("QSQLITE");
    QString aFile = "D:/code/QT/ex/lab3.db";
    database.setDatabaseName(aFile);

    if (!database.open()){
        qDebug() << "failed to open database";
    } else
        qDebug() << "open database is ok" << database.connectionName();
}

bool IDatabase::initPatientModel()
{
    patientTabModel = new QSqlTableModel(this,database);
    patientTabModel->setTable("patient");
    patientTabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);//数据保存方式
    patientTabModel->setSort(patientTabModel->fieldIndex("name"),Qt::AscendingOrder);//排序
    if (!(patientTabModel->select()))//查询返回
        return false;
    thePatientSelection = new QItemSelectionModel(patientTabModel);
    return true;
}

bool IDatabase::searchPatient(QString filter)
{
    patientTabModel->setFilter(filter);
    return patientTabModel->select();
}

bool IDatabase::deleteCurrentPatient()
{
    QModelIndex curIndex = thePatientSelection->currentIndex();
    patientTabModel->removeRow(curIndex.row());
    patientTabModel->submitAll();
    patientTabModel->select();
}

bool IDatabase::submitPatientEdit()
{
    return patientTabModel->submitAll();
}

void IDatabase::revertPatientEdit()
{
    patientTabModel->revertAll();
}

QString IDatabase::userLogin(QString useName, QString password)
{
    QSqlQuery query;
    query.prepare("select username,password from user where username = :USER");
    query.bindValue(":USER",useName);
    query.exec();
    qDebug() << query.lastQuery() << query.first();

    if (query.first() && query.value("username").isValid()){
        QString passwd = query.value("password").toString();
        if (passwd == password){
            qDebug() << "login ok";
            return "loginOK";
        } else{
            qDebug() << "wrong password";
            return "wrongPassword";
        }
    } else{
        qDebug() << "no such user";
        return "wrongUsername";
    }
}

IDatabase::IDatabase(QObject *parent): QObject{parent}
{
    initDatabase();
}
