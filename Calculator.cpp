#include "Calculator.h"
#include <iostream>
#include <sstream>

// Calculator class definition

std::string Calculator::formatToTwoDecimalPlaces(float number) {
    // Helper function to format numbers to two decimal places
    std::ostringstream stream;
    stream.precision(2);
    stream << std::fixed << number;
    return stream.str();
}

float Calculator::add(float a, float b) {
    // Calculates and returns the result of adding two numbers (float), and adds the calculation to the history

    float result = a + b;

    std::string calcType = getCalculatorType();
    records.add(calcType + ": " +
                formatToTwoDecimalPlaces(a) + " + " +
                formatToTwoDecimalPlaces(b) + " = " +
                formatToTwoDecimalPlaces(result));
    return result;
}

float Calculator::subtract(float a, float b) {
    // Calculates and returns the result of subtracting two numbers (float), and adds the calculation to the history

    float result = a - b;

    std::string calcType = getCalculatorType();
    records.add(calcType + ": " +
                formatToTwoDecimalPlaces(a) + " - " +
                formatToTwoDecimalPlaces(b) + " = " +
                formatToTwoDecimalPlaces(result));
    return result;
}

float Calculator::multiply(float a, float b) {
    // Calculates and returns the result of multiplying two numbers (float), and adds the calculation to the history

    float result = a * b;

    std::string calcType = getCalculatorType();
    records.add(calcType + ": " +
                formatToTwoDecimalPlaces(a) + " * " +
                formatToTwoDecimalPlaces(b) + " = " +
                formatToTwoDecimalPlaces(result));
    return result;
}

float Calculator::divide(float a, float b) {
    // Calculates and returns the result of dividing two numbers (float), and adds the calculation to the history

    // Ensure division by zero y handled
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }

    float result = a / b;

    std::string calcType = getCalculatorType();
    records.add(calcType + ": " +
                formatToTwoDecimalPlaces(a) + " / " +
                formatToTwoDecimalPlaces(b) + " = " +
                formatToTwoDecimalPlaces(result));
    return result;
}

const History& Calculator::getHistory() const {
    // Retrieve the calculation history
    return records;
}

void Calculator::clearHistory(){
    // Erase the calculation history
    records.clear();
}


std::string Calculator::getCalculatorType() const {
    // Return type of calculator
    return "Standard Calculator";
}
