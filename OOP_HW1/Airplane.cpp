#include "Airplane.h"

// getters
string Airplane::getFlight_number() {
    return flight_number;
}
int Airplane::getAltitude() {
    return altitude;
}
float Airplane::getFuel() {
    return fuel;
}
bool Airplane::getIs_flying() {
    return is_flying;
}

// setters
void Airplane::setFlight_number(string nFlight_number) {
    flight_number = nFlight_number;
}
void Airplane::setAltitude(int nAltitude) {
    altitude = nAltitude;
}
void Airplane::setFuel(float nFuel) {
    if (nFuel < 0 || nFuel > 1000) {
        cout << "Incorrect fuel value\n";
    }
    else {
        fuel = nFuel;
    }
}
void Airplane::setIs_flying(bool nIs_flying) {
    is_flying = nIs_flying;
}

void Airplane::TakeOff() {
    if (!is_flying && fuel > 100) {
        cout << flight_number << " is taking off\n";
        is_flying = true;
        altitude = 10000;
        fuel -= 100;
        cout << "Altitude: " << altitude << "m, Fuel: " << fuel << "l\n";
    }
    else {
        cout << flight_number << " cannot take off: already flying or low fuel\n";
    }
}
void Airplane::Land() {
    if (is_flying) {
        cout << flight_number << " is landing\n";
        is_flying = false;
        altitude = 0;
        cout << "Altitude: " << altitude << "m\n";
    }
    else {
        cout << flight_number << " is already on the ground\n";
    }
}
void Airplane::Refuel() {
    fuel = 1000;
    cout << "Fuel: " << fuel << "l\n";
}