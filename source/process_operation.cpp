#include <iostream>
#include <fstream>
#include <string>
#include "process_operation.h"

void queryCurrentTimetables() {
    system("cls");
    std::cout << "Current Trains:\n\n";
    std::ifstream config("config.txt");
    if (config.is_open()) {
        std::string identifier, departureTime, arrivalTime;
        while (config >> identifier >> departureTime >> arrivalTime) {
            std::cout << identifier << ' ' << departureTime << ' ' << arrivalTime << "\n\n";
        }
        config.close();
        std::cout << "press enter to exit...";
        getchar(), getchar();
    } else {
        std::cout << "FILE FAILED TO OPEN\n";
    }
}

void newTrainTimetable() {
    system("cls");
    std::cout << "3 arguments required:\n";
    std::cout << "identifier[string], departure time[xx:xx], arrival time[xx:xx]\n";
    std::ofstream config("config.txt", std::ios::app);

    if (config.is_open()) {
        std::string identifier, departureTime, arrivalTime;
        std::cin >> identifier >> departureTime >> arrivalTime;
        config << identifier << ' ' << departureTime << ' ' << arrivalTime << '\n';
        config.close();
    } else {
        std::cout << "FILE FAILED TO OPEN\n";
    }
}
