#pragma once
#include "interfacing.h"

class bailout_peg : public interfacing
{
    Q_OBJECT

public:
    bailout_peg(QWidget *parent = nullptr);
    virtual void updateSmth();
};
