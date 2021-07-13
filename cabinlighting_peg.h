#pragma once
#include "interfacing.h"

class cabinlighting_peg : public interfacing
{
    Q_OBJECT

private:
    int s6_3340{};
    int s1_3341{};
    int s2_3341{};

public:

    cabinlighting_peg(QWidget *parent = nullptr);
    virtual void updateSmth();
};
