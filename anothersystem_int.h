#pragma once
#include "interfacing.h"

class anothersystem_int : public interfacing
{
    Q_OBJECT

public:

    anothersystem_int(QWidget *parent = nullptr);
    virtual void updateSmth();
};
