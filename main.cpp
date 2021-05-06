#include <QApplication>
#include "aircondition_int.h"
#include "anothersystem_int.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    aircondition_int aircondition;
    aircondition.show();
    anothersystem_int anothersystem;
    anothersystem.show();
    return a.exec();
}
