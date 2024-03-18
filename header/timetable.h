#ifndef TRAINTIMETABLE_TIMETABLE_H
#define TRAINTIMETABLE_TIMETABLE_H

#include <string>
#include "time24.h"

class Timetable {
protected:
    Time24 departureTime;
    Time24 arrivalTime;
public:
    Timetable(Time24 d, Time24 a) : departureTime(d), arrivalTime(a) {};

    void setTimetable(Time24 d, Time24 a);

    [[nodiscard]] Time24 getDepartureTime() const;

    [[nodiscard]] Time24 getArrivalTime() const;
};

#endif //TRAINTIMETABLE_TIMETABLE_H
