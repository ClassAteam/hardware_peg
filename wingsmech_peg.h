#pragma once
#include "interfacing.h"

class wingsmech_peg : public interfacing
{
    Q_OBJECT

public:

    wingsmech_peg(QWidget *parent = nullptr);
    virtual void updateSmth();
};
