#include "Header.h"

class Car {
private:
    string model;
    int year;
    float fuel_level = 100.0;
    bool is_running;

public:
    // getters
    string GetModel();
    int GetYear();
    float GetFuel_level();
    bool GetIs_running();

    // setters
    void SetModel(string model);
    void SetYear(int year);
    void SetFuel_level(float fuel_level);
    void SetIs_running(bool is_running);

    void StartEngine();
    void Drive();
    void Refuel();
};