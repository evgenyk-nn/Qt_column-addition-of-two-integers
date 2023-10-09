#include "mainwindow.h"
#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;
    w.show();

    setlocale(LC_ALL, "rus");

    cout << "Введите первое слагаемое: ";
    int num1;
    cin >> num1;
    num1 = w.check(num1);

    cout << "Введите второе слагаемое: ";
    int num2;
    cin >> num2;
    num2 = w.check(num2);

    if (num2 > num1 || num2 < num1) {
        num2 = num1 + num2;
        num1 = num2 - num1;
        num2 = num2 - num1;
    }
    int result = num1 + num2;


    return app.exec();
}
