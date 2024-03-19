#ifndef TRAINTIMETABLE_TIMETABLE_H
#define TRAINTIMETABLE_TIMETABLE_H

#include <string>
#include "time24.h"

class Timetable {
protected:
    Time24 arrivalTime;
    Time24 departureTime;
public:
    Timetable(Time24 &d, Time24 &a) : arrivalTime(a), departureTime(d) {};

    Timetable(std::string &d, std::string &a) : arrivalTime(Time24(a)), departureTime(Time24(d)) {};

    void setTimetable(Time24 d, Time24 a);

    [[nodiscard]] Time24 getDepartureTime() const;

    [[nodiscard]] Time24 getArrivalTime() const;
};

#endif //TRAINTIMETABLE_TIMETABLE_H
