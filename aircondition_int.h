#pragma once
#include "interfacing.h"

class aircondition_int : public interfacing
{
    Q_OBJECT

public:

    aircondition_int(QWidget *parent = nullptr);
    virtual void updateSmth();
};
