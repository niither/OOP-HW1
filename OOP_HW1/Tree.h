#include "Header.h"

class Tree {
private:
    string type;
    float height;
    int water_level = 50;
    bool is_alive;

public:
    // getters
    string getType();
    float getHeight();
    int getWater_level();
    bool getIs_alive();

    // setters
    void setType(string nType);
    void setHeight(float nHeight);
    void setWater_level(int nWater_level);
    void setIs_alive(bool nIs_alive);

    void Grow();
    void Water();
    void CheckHealth();
};