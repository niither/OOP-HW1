#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;
    float fuel_level = 100.0;
    bool is_running;

public:
    // getters
    string GetModel() {
        return model;
    }
    int GetYear() {
        return year;
    }
    float GetFuel_level () {
        return fuel_level;
    }
    bool GetIs_running() {
        return is_running;
    }

    // setters
    void SetModel(string nModel) {
        model = nModel;
    }
    void SetYear(int nYear) {
        if (nYear < 1886 || nYear > 2025) {
            cout << "Incorrect year\n";
        }
        else {
            year = nYear;
        }
    }
    void SetFuel_level(float nFuel_level) {
        if (nFuel_level < 0 || nFuel_level > 100) {
            cout << "Incorrect fuel level\n";
        }
        else {
            fuel_level = nFuel_level;
        }
    }
    void SetIs_running(bool nIs_running) {
        is_running = nIs_running;
    }

    void StartEngine() {
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
    void Drive() {
        if (is_running && fuel_level > 0) {
            cout << model << " is driving\n";
            fuel_level -= 0.5;
            cout << "Fuel level: " << fuel_level << "%\n";
        }
        else {
            cout << model << " cannot drive: low fuel or engine off\n";
        }
    }
    void Refuel() {
        cout << model << " is refueling\n";
        fuel_level = 100.0;
        cout << "Fuel level: " << fuel_level << "%\n";
    }
};

class Robot {
private:
    string name;
    int battery_level = 100;
    bool is_active;

public:
    // getters
    string getName() {
        return name;
    }
    int getBattery_level() {
        return battery_level;
    }
    bool getIs_active() {
        return is_active;
    }

    // setters
    void setName(string nName) {
        name = nName;
    }
    void setBattery_level(int nBattery_level) {
        if (nBattery_level < 0 || nBattery_level > 100) {
            cout << "Incorrect battery level\n";
        }
        else {
            battery_level = nBattery_level;
        }
    }
    void setIs_active(bool nIs_active) {
        is_active = nIs_active;
    }

    void Work() {
        if (is_active && battery_level > 0) {
            cout << name << " is working\n";
            battery_level--;
            cout << "Battery level: " << battery_level << "%\n";
        }
        else {
            cout << name << " cannot work: low battery or not active\n";
        }
    }
    void Recharge() {
        cout << name << " is recharging\n";
        battery_level = 100;
        cout << "Battery level: " << battery_level << "%\n";
    }
    void OnOff() {
        is_active = !is_active;
        cout << name << " power is now " << (is_active ? "ON" : "OFF") << "\n";
    }
};

class Tree {
private:
    string type;
    float height;
    int water_level = 50;
    bool is_alive;

public:
    // getters
    string getType() {
        return type;
    }
    float getHeight() {
        return height;
    }
    int getWater_level() {
        return water_level;
    }
    bool getIs_alive() {
        return is_alive;
    }

    // setters
    void setType(string nType) {
        type = nType;
    }
    void setHeight(float nHeight) {
        height = (unsigned)nHeight;
    }
    void setWater_level(int nWater_level) {
        if (nWater_level < 0 || nWater_level > 100) {
            cout << "Incorrect water level\n";
        }
        else {
            water_level = nWater_level;
        }
    }
    void setIs_alive(bool nIs_alive) {
        is_alive = nIs_alive;
    }

    void Grow() {
        if (is_alive && water_level > 5) {
            cout << type << " is growing\n";
            height += 0.5;
            water_level -= 5;
            cout << "Height: " << height << "m, Water level: " << water_level << "\n";
        }
        else {
            cout << type << " cannot grow: not enough water or dead\n";
        }
    }
    void Water() {
        cout << type << " is being watered\n";
        water_level += 20;
        if (water_level > 100) {
            water_level = 100;
        }
        cout << "Water level: " << water_level << "\n";
    }
    void CheckHealth() {
        if (water_level == 0) {
            is_alive = false;
        }
        cout << type << " health: " << (is_alive ? "Alive" : "Dead") << "\n";
    }
};

class Airplane {
private:
    string flight_number;
    int altitude;
    float fuel = 1000.0;
    bool is_flying;

public:
    // getters
    string getFlight_number() {
        return flight_number;
    }
    int getAltitude() {
        return altitude;
    }
    float getFuel() {
        return fuel;
    }
    bool getIs_flying() {
        return is_flying;
    }

    // setters
    void setFlight_number(string nFlight_number) {
        flight_number = nFlight_number;
    }
    void setAltitude(int nAltitude) {
        altitude = nAltitude;
    }
    void setFuel(float nFuel) {
        if (nFuel < 0 || nFuel > 1000) {
            cout << "Incorrect fuel value\n";
        }
        else {
            fuel = nFuel;
        }
    }
    void setIs_flying(bool nIs_flying) {
        is_flying = nIs_flying;
    }

    void TakeOff() {
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
    void Land() {
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
    void Refuel() {
        fuel = 1000;
        cout << "Fuel: " << fuel << "l\n";
    }
};

class Book {
private:
    string title;
    int pages;
    int current_page = 0;
    bool is_open;

public:
    // getters
    string getTitle() {
        return title;
    }
    int getPages() {
        return pages;
    }
    int getCurrent_page() {
        return current_page;
    }
    bool getIs_open() {
        return is_open;
    }
    // setters
    void setTitle(string nTitle) {
        title = nTitle;
    }
    void setPages(int nPages) {
        pages = (unsigned)nPages;
    }
    void setCurrent_page(int nCurrent_page) {
        if (nCurrent_page > pages || nCurrent_page < 0) {
            cout << "Incorrect current page\n";
        }
        else {
            current_page = nCurrent_page;
        }
    }
    void setIs_open(bool nIs_open) {
        is_open = nIs_open;
    }

    void Open() {
        if (!is_open) {
            cout << title << " is opened\n";
            is_open = true;
        }
        else {
            cout << title << " is already open\n";
        }
    }
    void Read() {
        if (is_open && current_page < pages) {
            cout << "Reading " << title << "\n";
            current_page++;
            cout << "Current page: " << current_page << "\n";
        }
        else {
            cout << "Cannot read: book is closed or not enough pages left\n";
        }
    }
    void Close() {
        if (is_open) {
            cout << title << " is closed\n";
            is_open = false;
        }
        else {
            cout << title << " is already closed";
        }
    }
};

int main() {}
