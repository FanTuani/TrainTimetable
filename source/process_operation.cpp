#include <iostream>
#include <string>
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
//    system("cls");
//    std::cout << "3 arguments required:\n";
//    std::cout << "identifier[string], departure time[xx:xx], arrival time[xx:xx]\n";
//    std::ofstream config("config.txt", std::ios::app);
//
//    if (config.is_open()) {
//        std::string identifier, departureTime, arrivalTime;
//        std::cin >> identifier >> departureTime >> arrivalTime;
//        config << identifier << ' ' << departureTime << ' ' << arrivalTime << '\n';
//        config.close();
//    } else {
//        std::cout << "FILE FAILED TO OPEN\n";
//    }
}
