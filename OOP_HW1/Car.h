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
    void SetModel(string nModel);
    void SetYear(int nYear);
    void SetFuel_level(float nFuel_level);
    void SetIs_running(bool nIs_running);

    void StartEngine();
    void Drive();
    void Refuel();
};