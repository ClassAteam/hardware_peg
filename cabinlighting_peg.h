#pragma once
#include "interfacing.h"

class cabinlighting_peg : public interfacing
{
    Q_OBJECT

private:
    int s3_3340{};
    enum class s3_3340{vipusk, uborka};
    int s4_3340{};
    enum class s4_3340{vipusk, uborka};
    int s6_3340{};
    enum class s6_3340{vzlpos, rulenie, otkl};
    int s1_3341{};
    enum class s1_3341{ANO10, ANO30, ANO100, MIGANIE, neytral};
    int s2_3341{};
    enum class s2_3341{mayak100, ponizh};

public:

    cabinlighting_peg(QWidget *parent = nullptr);
    virtual void updateSmth();
};
