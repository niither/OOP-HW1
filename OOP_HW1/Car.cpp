#include "Car.h"

// getters
string Car::GetModel() {
    return model;
}
int Car::GetYear() {
    return year;
}
float Car::GetFuel_level() {
    return fuel_level;
}
bool Car::GetIs_running() {
    return is_running;
}

// setters
void Car::SetModel(string model) {
    this->model = model;
}
void Car::SetYear(int year) {
    if (year < 1886 || year > 2025) {
        cout << "Incorrect year\n";
    }
    else {
        this->year = year;
    }
}
void Car::SetFuel_level(float fuel_level) {
    if (fuel_level < 0 || fuel_level > 100) {
        cout << "Incorrect fuel level\n";
    }
    else {
        this->fuel_level = fuel_level;
    }
}
void Car::SetIs_running(bool is_running) {
    this->is_running = is_running;
}

void Car::StartEngine() {
    if (!is_running) {
        cout << model << " engine started\n";
        is_running = true;
        fuel_level -= 0.5;
        cout << "Fuel level: " << fuel_level << "%\n";
    }
    else {
        cout << model << " engine is already running\n";
    }
}
void Car::Drive() {
    if (is_running && fuel_level > 0) {
        cout << model << " is driving\n";
        fuel_level -= 0.5;
        cout << "Fuel level: " << fuel_level << "%\n";
    }
    else {
        cout << model << " cannot drive: low fuel or engine off\n";
    }
}
void Car::Refuel() {
    cout << model << " is refueling\n";
    fuel_level = 100.0;
    cout << "Fuel level: " << fuel_level << "%\n";
}