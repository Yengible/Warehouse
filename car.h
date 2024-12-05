#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>


class Car
{
public:

    int value, capacity, power_HP;
    std::string registration, colour;
    Car(int worth, int cap, int HP, std::string regi, std::string farbe);
};

#endif // CAR_H
