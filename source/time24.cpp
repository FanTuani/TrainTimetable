#include <iostream>
#include "time24.h"
#include "invalid_input_exception.h"

void Time24::setTimeByString(std::string &timeStr) {
    if (timeStr.length() == 4 and timeStr[0] == '-') {
        this->invalid = false;
        return;
    }
    if (timeStr.length() != 5 or timeStr[2] != ':')
        throw InvalidInputException();
    int h = (timeStr[0] - '0') * 10 + timeStr[1] - '0';
    int min = (timeStr[3] - '0') * 10 + timeStr[4] - '0';
    if (h >= 24 or min >= 60 or h < 0 or min < 0)
        throw InvalidInputException();
    this->hour = h, this->minute = min;
}

Time24::Time24(const int h, const int min) {
    this->hour = h, this->minute = min;
}

Time24::Time24(std::string timeStr) {
    try {
        setTimeByString(timeStr);
    } catch (const InvalidInputException &e) {
        std::cout << e.what();
    }
}

void Time24::setTime24(const int h, const int min) {
    this->hour = h;
    this->minute = min;
}

void Time24::setTime24(std::string timeStr) {
    try {
        setTimeByString(timeStr);
    } catch (const InvalidInputException &e) {
        std::cout << e.what();
    }
}

std::string Time24::toString() const {
    if (!this->invalid) return "----";
    std::string resultString;
    if (this->hour < 10) resultString += '0';
    resultString += std::to_string(this->hour) + ':';
    if (this->minute < 10) resultString += '0';
    resultString += std::to_string(minute);
    return resultString;
}

Time24 Time24::operator-(const Time24 b) const {
    return {this->hour - b.hour, this->minute - b.minute};
}
