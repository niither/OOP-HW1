#include "Header.h"

class Robot {
private:
    string name;
    int battery_level = 100;
    bool is_active;

public:
    // getters
    string getName();
    int getBattery_level();
    bool getIs_active();

    // setters
    void setName(string nName);
    void setBattery_level(int nBattery_level);
    void setIs_active(bool nIs_active);

    void Work();
    void Recharge();
    void OnOff();
};