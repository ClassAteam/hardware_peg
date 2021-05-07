#pragma once
#include "interfacing.h"

class outD_int : public interfacing
{
    Q_OBJECT

public:

    outD_int(QWidget *parent = nullptr);
    virtual void updateSmth();
};
