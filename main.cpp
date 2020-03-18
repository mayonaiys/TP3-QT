#include <iostream>
#include <QtWidgets/QApplication>
#include "ProgressBar.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    ProgressBar window;
    window.show();
    return app.exec();
}
