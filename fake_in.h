#pragma once
#include "interfacing.h"

class fake_in : public interfacing
{
    Q_OBJECT

public:

    fake_in(QWidget *parent = nullptr);
    virtual void updateSmth();
};
