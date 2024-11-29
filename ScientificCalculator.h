#ifndef SCIENTIFICCALCULATOR_H
#define SCIENTIFICCALCULATOR_H

#include "Calculator.h"

class ScientificCalculator : public Calculator {
    // ScientificCalculator class declaration
    public:
        float calculateSqrRoot(float a);
        float calculatePower(float base, float exponent);

        // Override virtual function from base class
        std::string getCalculatorType() const override;
};

#endif // SCIENTIFICCALCULATOR_H
