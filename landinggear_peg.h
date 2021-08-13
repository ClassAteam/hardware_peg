#pragma once
#include "interfacing.h"

class landinggear_peg : public interfacing
{
    Q_OBJECT

private:
    int s2_3230{};
    enum class s2_3230{vipusk, uborka};
    int s31_3230{};
    enum class s31_3230{otkl, peredn, lev, prav};
public:

    landinggear_peg(QWidget *parent = nullptr);
    virtual void updateSmth();
};

