#ifndef TRAINTIMETABLE_TIME24_H
#define TRAINTIMETABLE_TIME24_H

#include <string>

class Time24 {
private:
    int hour{};
    int minute{};

    void setTimeByString(std::string &);

public:
    Time24(int &h, int &min) : hour(h), minute(min) {};

    explicit Time24(std::string &);

    void setTime24(int &, int &);

    void setTime24(std::string &);

    [[nodiscard]] std::string toString() const;
};

#endif //TRAINTIMETABLE_TIME24_H
