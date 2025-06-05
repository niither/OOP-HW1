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
void Car::SetModel(string nModel) {
    model = nModel;
}
void Car::SetYear(int nYear) {
    if (nYear < 1886 || nYear > 2025) {
        cout << "Incorrect year\n";
    }
    else {
        year = nYear;
    }
}
void Car::SetFuel_level(float nFuel_level) {
    if (nFuel_level < 0 || nFuel_level > 100) {
        cout << "Incorrect fuel level\n";
    }
    else {
        fuel_level = nFuel_level;
    }
}
void Car::SetIs_running(bool nIs_running) {
    is_running = nIs_running;
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