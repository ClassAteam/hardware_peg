#pragma once
#include "interfacing.h"

class power_peg : public interfacing
{
    Q_OBJECT

public:

    power_peg(QWidget *parent = nullptr);
    virtual void updateSmth();
};
