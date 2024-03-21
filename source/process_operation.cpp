#include <iostream>
#include <string>
#include <fstream>
#include "process_operation.h"
#include "train.h"

void queryCurrentTimetables() {
    system("cls");
    for (const auto &train: trains) {
        std::cout << train.getIdentifier() << "\n";
        for (int i = 0; i < train.getStationNames().size(); i++) {
            std::string stationName = train.getStationNames()[i];
            std::string departureTime = train.getTimetables()[i].getDepartureTime().toString();
            std::string arrivalTime = train.getTimetables()[i].getArrivalTime().toString();
            std::cout << stationName << ' ' << arrivalTime << ' ' << departureTime << "\n";
        }
        std::cout << '\n';
    }
    getchar(), getchar();
}

void newTrainTimetable() {
    system("cls");
    std::ofstream config("config.txt", std::ios::app);
    if (config.is_open()) {
        std::cout << "2 arguments required:\n";
        std::cout << "identifier[string], passed stations[int]\n";
        std::string identifier;
        int passedStations;
        std::cin >> identifier >> passedStations;
        config << identifier << ' ' << passedStations << '\n';
        std::cout << "[name] [arrival time] [departure time]\n";
        for (int i = 1; i <= passedStations; i++) {
            std::cout << "station [" << i << "]: ";
            std::string stationName, arrivalTime, departureTime;
            std::cin >> stationName >> arrivalTime >> departureTime;
            config << stationName << ' ' << arrivalTime << ' ' << departureTime << '\n';
        }
        config << '\n';
        config.close();
    } else {
        std::cout << "FILE FAILED TO OPEN\n";
    }
}
