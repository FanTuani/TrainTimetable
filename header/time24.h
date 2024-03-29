#ifndef TRAINTIMETABLE_TIME24_H
#define TRAINTIMETABLE_TIME24_H

#include <string>

class Time24 {
private:
    bool invalid = true;
    int hour{};
    int minute{};

    void setTimeByString(const std::string &);

public:
    Time24(int h, int min);

    explicit Time24(const std::string&);

    void setTime24(int, int);

    void setTime24(const std::string&);

    [[nodiscard]] std::string toString() const;

    Time24 operator-(const Time24 &) const;

    bool operator<(const Time24 &) const;
};

#endif //TRAINTIMETABLE_TIME24_H
