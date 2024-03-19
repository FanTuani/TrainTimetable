#ifndef TRAINTIMETABLE_STATION_H
#define TRAINTIMETABLE_STATION_H

#include <string>
#include <vector>

class Train;

class Station {
private:
    std::string name;
    std::vector<std::string> passTrains;
public:
    Station(std::string &str, std::vector<std::string> &tra) : name(str), passTrains(tra) {};

    [[nodiscard]] std::string getName() {
        return this->name;
    }

    [[nodiscard]] std::vector<std::string> getPassTrains() {
        return this->passTrains;
    }
};

extern std::vector<Station> stations;

#endif //TRAINTIMETABLE_STATION_H
