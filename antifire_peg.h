#pragma once
#include "interfacing.h"

class antifire_peg : public interfacing
{
    Q_OBJECT

public:

    antifire_peg(QWidget *parent = nullptr);
    virtual void updateSmth();
};
