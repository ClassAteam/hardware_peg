#pragma once
#include "interfacing.h"

class pneumo_peg : public interfacing
{
    Q_OBJECT

public:

    pneumo_peg(QWidget *parent = nullptr);
    virtual void updateSmth();
};
