#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <QMainWindow>

#ifndef MAINWINDOW_H
#define MAINWINDOW_H



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public:
    Ui::MainWindow *ui;

    int check(int n);
};
#endif // MAINWINDOW_H
