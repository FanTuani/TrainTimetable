#include <iostream>
#include "invalid_input_exception.h"
#include "time24.h"

void info();

void process(const int &);

int main() {
    Time24 a = Time24(3, 50);
    Time24 b = Time24(2, 30);
    std::cout << (a - b).toString();
    while (0) {
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
    system("cls");
    switch (operation) {
        case 0:
            exit(0);
        case 1:
            break;
        case 2:
            break;
        default:
            throw InvalidInputException();
    }
}