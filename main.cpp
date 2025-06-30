#include "desenho.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Desenho d;
    d.show();

    return a.exec();
}
