#ifndef HISTORY_H
#define HISTORY_H

#include <vector>
#include <string>

class History {
    // History class declaration
    private:
        // Private attributes to ensure they are not directly accessible from outside the class
        std::vector<std::string> records;

    public:
        // History class methods

        // Constructor
        History();

        void add(const std::string& record);
        const std::vector<std::string>& get() const;
        void clear();
};

#endif // HISTORY_H
