#include "warehouse.h"
#include <iostream>
#include <string>




int Warehouse::getValue(int index, int parking)            // step 2, getting the car method
{
    std::cout << "\nseeing if car is at space " << index;
    if(index == parking)
    {
        return 1;
    }

    return 0;
}

void Warehouse::Parked(Car park_car)
{



}
