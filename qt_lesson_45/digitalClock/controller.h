#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QTimerEvent>
#include "mainwindow.h"
#include "data.h"

class Controller : public QObject
{
    Q_OBJECT
public:
    explicit Controller(QObject *parent = nullptr);
    ~Controller();

    MainWindow* mainwindow{nullptr};
    Data* data{nullptr};

    void run_app();


    int id_timer_sec{-1};

    void timerEvent(QTimerEvent* event);

signals:
    void signalOneSec();

public slots:
    void surname();
};

#endif // CONTROLLER_H
