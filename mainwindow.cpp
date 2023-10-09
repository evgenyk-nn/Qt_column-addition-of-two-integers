#include "mainwindow.h"
#include "./ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


int MainWindow::check(int n) {
    while (cin.fail() || n < 0 || cin.get() != '\n') {
        cout << "Ошибка ввода! Введите слагаемое: ";
        cin.clear();
        string str;
        getline(cin, str);
        cin >> n;
    }
    return n;
}


MainWindow::~MainWindow()
{
    delete ui;
}

