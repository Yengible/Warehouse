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
    int storage[10];
    Warehouse(int space)      //constructor with set Capacity
    {
        storage[3] = 12;
    }
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

    Car Levon_car;                      // object car
    Warehouse Parkplatzt_luzern (35);   // Fixed object Warehouse

    Levon_car.capacity = 4;
    Levon_car.top_speed = 35;
    Levon_car.value = 25;


    Parkplatzt_luzern.storage[1] == 12;


    return 0;
}