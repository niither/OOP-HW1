#include "Robot.h"

// getters
string Robot::getName() {
    return name;
}
int Robot::getBattery_level() {
    return battery_level;
}
bool Robot::getIs_active() {
    return is_active;
}

// setters
void Robot::setName(string nName) {
    name = nName;
}
void Robot::setBattery_level(int nBattery_level) {
    if (nBattery_level < 0 || nBattery_level > 100) {
        cout << "Incorrect battery level\n";
    }
    else {
        battery_level = nBattery_level;
    }
}
void Robot::setIs_active(bool nIs_active) {
    is_active = nIs_active;
}

void Robot::Work() {
    if (is_active && battery_level > 0) {
        cout << name << " is working\n";
        battery_level--;
        cout << "Battery level: " << battery_level << "%\n";
    }
    else {
        cout << name << " cannot work: low battery or not active\n";
    }
}
void Robot::Recharge() {
    cout << name << " is recharging\n";
    battery_level = 100;
    cout << "Battery level: " << battery_level << "%\n";
}
void Robot::OnOff() {
    is_active = !is_active;
    cout << name << " power is now " << (is_active ? "ON" : "OFF") << "\n";
}