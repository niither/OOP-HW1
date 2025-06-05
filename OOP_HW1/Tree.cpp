#include "Tree.h"

// getters
string Tree::getType() {
    return type;
}
float Tree::getHeight() {
    return height;
}
int Tree::getWater_level() {
    return water_level;
}
bool Tree::getIs_alive() {
    return is_alive;
}

// setters
void Tree::setType(string nType) {
    type = nType;
}
void Tree::setHeight(float nHeight) {
    height = (unsigned)nHeight;
}
void Tree::setWater_level(int nWater_level) {
    if (nWater_level < 0 || nWater_level > 100) {
        cout << "Incorrect water level\n";
    }
    else {
        water_level = nWater_level;
    }
}
void Tree::setIs_alive(bool nIs_alive) {
    is_alive = nIs_alive;
}

void Tree::Grow() {
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
void Tree::Water() {
    cout << type << " is being watered\n";
    water_level += 20;
    if (water_level > 100) {
        water_level = 100;
    }
    cout << "Water level: " << water_level << "\n";
}
void Tree::CheckHealth() {
    if (water_level == 0) {
        is_alive = false;
    }
    cout << type << " health: " << (is_alive ? "Alive" : "Dead") << "\n";
}