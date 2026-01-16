#ifndef POWER_H
#define POWER_H
#include "Calculator.h"

// ¼Ì³Ð Calculator ¸¸Àà
class Power : public Calculator {
    public:
        // ÉùÃ÷ calculate º¯Êý
        double calculate(double a, double b) override;
};

#endif
