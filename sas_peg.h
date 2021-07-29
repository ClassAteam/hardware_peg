#pragma once
#include "interfacing.h"

class sas_peg : public interfacing
{
    Q_OBJECT

private:

public:
    sas_peg(QWidget *parent = nullptr);
    virtual void updateSmth();
};
