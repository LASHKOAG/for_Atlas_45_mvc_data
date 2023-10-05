#include <QDebug>
#include "controller.h"

Controller::Controller(QObject *parent) : QObject(parent)
{
    mainwindow = new MainWindow();
    data = new Data();

    id_timer_sec = startTimer(1000);
    connect(this, &Controller::signalOneSec, mainwindow, &MainWindow::update_sec);
    connect(this, &Controller::signalOneSec, this, &Controller::surname);
}

Controller::~Controller()
{
    if (mainwindow != nullptr){delete mainwindow;}
}

void Controller::run_app()
{
    mainwindow->show();
}

void Controller::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == id_timer_sec)
    {
        emit signalOneSec();


    }
}

void Controller::surname()
{
    qDebug() << data->getSurname(0);

}
