#include <iostream>

#include "widget.h"
#include <QApplication>

int main(int argc, char* argv[]) {
    std::cout << "Hello world" << std::endl;

    QApplication app(argc, argv);
    Widget widget;
    widget.show();
    return app.exec();
}