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
    void setFlight_number(string nFlight_number);
    void setAltitude(int nAltitude);
    void setFuel(float nFuel);
    void setIs_flying(bool nIs_flying);

    void TakeOff();
    void Land();
    void Refuel();