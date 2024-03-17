#include "time24.h"
#include "timetable.h"

void Timetable::setTimetable(Time24 d, Time24 a) {
    this->departureTime = d, this->arrivalTime = a;
}

Time24 Timetable::getDepartureTime() const {
    return this->departureTime;
}

Time24 Timetable::getArrivalTime() const {
    return this->arrivalTime;
}
