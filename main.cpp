#include <QApplication>
#include "aircondition_int.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    aircondition_int aircondition;
    aircondition.show();
    return a.exec();
}
