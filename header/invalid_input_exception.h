#ifndef TRAINTIMETABLE_INVALID_INPUT_EXCEPTION_H
#define TRAINTIMETABLE_INVALID_INPUT_EXCEPTION_H

#include <exception>

class InvalidInputException : public std::exception {
public:
    [[nodiscard]] const char *what() const noexcept override {
        return "INVALID INPUT\n";
    }
};

#endif //TRAINTIMETABLE_INVALID_INPUT_EXCEPTION_H
