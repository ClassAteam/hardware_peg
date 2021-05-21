#pragma once
#include "interfacing.h"

class hydro_peg : public interfacing
{
    Q_OBJECT

public:

    hydro_peg(QWidget *parent = nullptr);
    virtual void updateSmth();
};
