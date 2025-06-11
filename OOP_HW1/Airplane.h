#include "Header.h"

class Airplane {
private:
    string flight_number;
    int altitude;
    float fuel = 1000.0;
    bool is_flying;

public:
    // getters
    string getFlight_number();
    int getAltitude();
    float getFuel();
    bool getIs_flying();

    // setters
    void setFlight_number(string flight_number);
    void setAltitude(int altitude);
    void setFuel(float fuel);
    void setIs_flying(bool is_flying);

    void TakeOff();
    void Land();
    void Refuel();
}