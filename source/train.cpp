#include <iostream>
#include <fstream>
#include "train.h"
#include "timetable.h"

std::vector<Train> trains;

void Train::loadTrains() {
    std::ifstream config("config.txt");
    if (config.is_open()) {
        std::string trainIdentifier;
        int stationNum;
        while (config >> trainIdentifier >> stationNum) {
            std::vector<std::string> stations;
            std::vector<Timetable> timetables;
            while (stationNum--) {
                std::string stationName, arrivalTime, departureTime;
                config >> stationName >> arrivalTime >> departureTime;
                stations.emplace_back(stationName);
                timetables.emplace_back(arrivalTime, departureTime);
            }
            trains.emplace_back(trainIdentifier, stations, timetables);
        }
        config.close();
    } else {
        std::cout << "FILE FAILED TO OPEN\n";
    }
}
