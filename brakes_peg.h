#pragma once
#include "interfacing.h"

class brakes_peg : public interfacing
{
    Q_OBJECT

public:

    brakes_peg(QWidget *parent = nullptr);
    virtual void updateSmth();
};
