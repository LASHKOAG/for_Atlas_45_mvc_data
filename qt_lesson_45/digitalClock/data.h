#ifndef DATA_H
#define DATA_H

#include <QObject>

class Data : public QObject
{
    Q_OBJECT
public:
    explicit Data(QObject *parent = nullptr);

    QString getSurname(int indx);



signals:

public slots:

private:
    QList <QString> m_list_surname;
};

#endif // DATA_H
