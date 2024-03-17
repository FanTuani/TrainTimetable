#ifndef TRAINTIMETABLE_INVALID_OPERATION_EXCEPTION_H
#define TRAINTIMETABLE_INVALID_OPERATION_EXCEPTION_H

#include <exception>

class InvalidOperationException : public std::exception {
public:
    [[nodiscard]] const char *what() const noexcept override {
        return "INVALID OPERATION";
    }
};

#endif //TRAINTIMETABLE_INVALID_OPERATION_EXCEPTION_H
