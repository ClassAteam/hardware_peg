#pragma once
#include "interfacing.h"

class antiicing_peg : public interfacing
{
    Q_OBJECT

public:

    antiicing_peg(QWidget *parent = nullptr);
    virtual void updateSmth();
};
