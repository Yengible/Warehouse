#include "car.h"
#include <iostream>
#include <string>


Car::Car(int worth, int cap, int HP, std::string regi, std::string farbe)
{
    value = worth;
    capacity = cap;
    power_HP = HP;
    registration = regi;
    colour = farbe;

}
