#include <iostream>
using namespace std;

class Car {
public:
    string model;
    int year;
    float fuel_level = 100.0;
    bool is_running;

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
public:
    string name;
    int battery_level = 100;
    bool is_active;

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
public:
    string type;
    float height;
    int water_level = 50;
    bool is_alive;

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
public:
    string flight_number;
    int altitude;
    float fuel = 1000.0;
    bool is_flying;

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
public:
    string title;
    int pages;
    int current_page = 0;
    bool is_open;

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

int main() {
    Car car;
    car.model = "Toyota";
    car.year = 2020;
    car.fuel_level = 80.0;
    car.is_running = false;
    car.StartEngine();
    car.Drive();
    car.Refuel();

    Robot robot;
    robot.name = "Robo";
    robot.battery_level = 90;
    robot.is_active = true;
    robot.Work();
    robot.OnOff();
    robot.Recharge();

    Tree tree;
    tree.type = "Oak";
    tree.height = 10.0;
    tree.water_level = 60;
    tree.is_alive = true;
    tree.Grow();
    tree.Water();
    tree.CheckHealth();

    Airplane airplane;
    airplane.flight_number = "123";
    airplane.altitude = 0;
    airplane.fuel = 800.0;
    airplane.is_flying = false;
    airplane.TakeOff();
    airplane.Land();
    airplane.Refuel();

    Book book;
    book.title = "The Hobbit";
    book.pages = 300;
    book.current_page = 0;
    book.is_open = false;
    book.Open();
    book.Read();
    book.Close();
}