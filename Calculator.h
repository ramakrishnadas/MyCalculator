#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "History.h"

class Calculator {
    // Calculator class declaration
    protected:
        // Protected attributes so that inherited classes have access
        History records;
        static std::string formatToTwoDecimalPlaces(float number);

    public:
        // Calculator class methods
        float add(float a, float b);
        float subtract(float a, float b);
        float multiply(float a, float b);
        float divide(float a, float b);
        const History& getHistory() const;
        void clearHistory();

        // Virtual function, can be overridden by child class
        virtual std::string getCalculatorType() const;
};


#endif // CALCULATOR_H
