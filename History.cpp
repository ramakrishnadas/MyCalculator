#include "History.h"
#include <vector>
#include <string>

// History class definition

// Constructor initializer
History::History() : records() {}

void History::add(const std::string &record) {
    // Add a record to the end of the calculation history
    records.push_back(record);
}

const std::vector<std::string>& History::get() const {
    // Retrieve the calculation history
    return records;
}

void History::clear() {
    // Erase the calculation history
    records.clear();
}
