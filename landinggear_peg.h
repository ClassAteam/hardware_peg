#pragma once
#include "interfacing.h"

class landinggear_peg : public interfacing
{
    Q_OBJECT

public:

    landinggear_peg(QWidget *parent = nullptr);
    virtual void updateSmth();
};

