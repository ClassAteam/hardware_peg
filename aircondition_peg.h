#pragma once
#include "interfacing.h"

class aircondition_peg : public interfacing
{
    Q_OBJECT

private:
    int s1_2151{};
    enum class s1_2151{neytr, hol, gor, avtomat};

public:
    aircondition_peg(QWidget *parent = nullptr);
    virtual void updateSmth();
};
