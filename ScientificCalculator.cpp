#include "ScientificCalculator.h"
#include <iostream>
#include <cmath>

// ScientificCalculator class definition

float ScientificCalculator::calculateSqrRoot(float a) {
    // Calculates and returns the square root of a number (float), and adds the calculation to the history

    float result;

    // Ensure the number is greater than or equal to zero. If not, log error to the console and return 0
    if (a < 0) {
        std::cerr << "Error: Attempted to calculate square root of negative number!" << std::endl;
        return 0;
    }

    result = sqrt(a);

    std::string calcType = getCalculatorType();
    records.add(calcType + ": " +
                "√" + formatToTwoDecimalPlaces(a) +
                " = " +
                formatToTwoDecimalPlaces(result));

    return result;
};

float ScientificCalculator::calculatePower(float base, float exponent) {
    // Calculates and returns the power of a number (float), and adds the calculation to the history

    float result = pow(base, exponent);

    std::string calcType = getCalculatorType();
    records.add(calcType + ": " +
                formatToTwoDecimalPlaces(base) + "^" +
                formatToTwoDecimalPlaces(exponent) + " = " +
                formatToTwoDecimalPlaces(result));

    return result;
};

std::string ScientificCalculator::getCalculatorType() const {
    // Return type of calculator
    return "Scientific Calculator";
}
