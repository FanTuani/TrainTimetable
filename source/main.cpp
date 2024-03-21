#include <iostream>
#include "invalid_input_exception.h"
#include "process_operation.h"
#include "train.h"

void info();

void process(const int &);

int main() {
    Train::loadTrains();
    while (true) {
        system("cls");
        info();
        int operation;
        std::cin >> operation;
        try {
            process(operation);
        } catch (const InvalidInputException &e) {
            std::cout << e.what();
        }
    }
    system("pause");
}

void info() {
    std::cout << "select your operation:\n";
    std::cout << "[1] query the current train timetables\n";
    std::cout << "[2] new train timetable\n";
    std::cout << "[0] Quit\n";
}

void process(const int &operation) {
    switch (operation) {
        case 0:
            exit(0);
        case 1:
            queryCurrentTimetables();
            break;
        case 2:
            newTrainTimetable();
            Train::loadTrains();
            break;
        default:
            throw InvalidInputException();
    }
}