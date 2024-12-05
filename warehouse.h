#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include <iostream>
#include <string>
#include "car.h"
#include <vector>

class Warehouse
{
public:
    int capacity;
    std::vector<Car> storage;
    Warehouse();
    int getValue(int index, int parking);
    Warehouse Parked(Car park_car, Warehouse park);
};

#endif // WAREHOUSE_H
