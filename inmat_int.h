#pragma once
#include "interfacing.h"

class inmat_int : public interfacing
{
    Q_OBJECT

public:

    inmat_int(QWidget *parent = nullptr);
    virtual void updateSmth();
};
