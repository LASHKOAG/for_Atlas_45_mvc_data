#include "data.h"

Data::Data(QObject *parent) : QObject(parent)
{
    m_list_surname.append("Ivanov");
    m_list_surname.append("Vasyliev");
    m_list_surname.append("Petrov");
    m_list_surname.append("Sidorov");
}

QString Data::getSurname(int indx)
{
    //ToDo
    if (m_list_surname.size() == 0){
        return "None";
        //system("shutdown");
    }

    if(indx < 0 || indx > m_list_surname.size()){
        return "None";
    }

    if(m_list_surname[indx].isEmpty()){
        return "None";
    }

    return m_list_surname[indx];
}


