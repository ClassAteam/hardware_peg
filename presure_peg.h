#pragma once
#include "interfacing.h"

class presure_peg : public interfacing
{
    Q_OBJECT

private:
    int s1_2131{};

public:

    presure_peg(QWidget *parent = nullptr);
    virtual void updateSmth();
};
