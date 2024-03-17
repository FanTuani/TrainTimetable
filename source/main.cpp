#include <iostream>
#include "invalid_operation_exception.h"

void info();

void process(const int &);

int main() {
    while (true) {
        info();
        int operation;
        std::cin >> operation;
        try {
            process(operation);
        } catch (const InvalidOperationException &e) {
            std::cout << e.what() << '\n';
        }
    }
    return 0;
}

void info() {
    std::cout << "select your operation:\n";
    std::cout << "[1] query the current train timetable\n";
    std::cout << "[2] new train schedule\n";
}

void process(const int &operation) {
    system("cls");
    switch (operation) {
        case 1:
            break;
        case 2:
            break;
        default:
            throw InvalidOperationException();
    }
}