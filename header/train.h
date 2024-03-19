#ifndef TRAINTIMETABLE_TRAIN_H
#define TRAINTIMETABLE_TRAIN_H

#include <string>
#include <vector>
#include "timetable.h"

class Train {
private:
    std::string identifier;
    std::vector<std::string> stations;
    std::vector<Timetable> timetables;
public:
    static void loadTrains();

    Train(std::string &id, std::vector<std::string> &vec, std::vector<Timetable> &tm) :
            identifier(id), stations(vec), timetables(tm) {};

    [[nodiscard]] std::string getIdentifier() const {
        return this->identifier;
    }

    [[nodiscard]] std::vector<std::string> getStationNames() const {
        return this->stations;
    }

    [[nodiscard]] std::vector<Timetable> getTimetables() const {
        return this->timetables;
    }
};

extern std::vector<Train> trains;

#endif //TRAINTIMETABLE_TRAIN_H
