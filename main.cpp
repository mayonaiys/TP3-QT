#include <iostream>
#include <QtWidgets/QApplication>
#include "ProgressBar.h"
#include "Fils.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    //Exercice 1 :
    //ProgressBar window;

    //Exercice 2 :
    Fils window;

    window.show();
    return app.exec();
}
