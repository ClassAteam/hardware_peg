#pragma once
#include "interfacing.h"

class power : public interfacing
{
    Q_OBJECT

public:

    power(QWidget *parent = nullptr);
    virtual void updateSmth();
};
