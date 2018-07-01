#ifndef BASEWINDOW_H
#define BASEWINDOW_H

#include <QWidget>
#include <QDialog>
#include "inc/gui/mytitlebar.h"
#include <QMainWindow>

class BaseWindow : public QMainWindow
{
    Q_OBJECT

public:
    BaseWindow(QWidget *parent = 0);
    ~BaseWindow();

private:
    void initTitleBar();

private slots:
    void onButtonMinClicked();
    void onButtonRestoreClicked();
    void onButtonMaxClicked();
    void onButtonCloseClicked();

public:
    MyTitleBar* m_titleBar;

};

#endif // BASEWINDOW_H
