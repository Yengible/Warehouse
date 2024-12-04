#include <QCoreApplication>
#include <QDebug>
#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <string>


class Car
{
public:
    int value, capacity, top_speed;
};


class Warehouse
{
public:
    int capacity;
    Car storage[10];
    Warehouse(int space)      //constructor with set Capacity
    {
        //storage[3] = 12;
    }

    int parkingspace(Car spot, Warehouse building)
    {
        int toggel = 0;
        Car Car_Holder;

        for(int x = 0; toggel == 1; x++)
        {
            Car_Holder = building.storage[x];

            if(spot == Car_Holder)
            {
            }

    }

    //int getValue(int index)
    //{
        //storage[index].value;
    //}
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Set up code that uses the Qt event loop here.
    // Call a.quit() or a.exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to a.exec() or use the Non-Qt Plain C++ Application template.
    int parking = 0;
    Car Levon_car;                      // object car
    Warehouse Parkplatzt_luzern (35);   // Fixed object Warehouse

    Levon_car.capacity = 4;
    Levon_car.top_speed = 35;
    Levon_car.value = 25;

    Parkplatzt_luzern.storage[1] = Levon_car;
    parking = Parkplatzt_luzern.parkingspace(Levon_car,Parkplatzt_luzern);


    return 0;
}
};
