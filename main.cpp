#include <QCoreApplication>
#include <QDebug>

#include <iostream>
#include <string>


class Car
{
public:
    int value, capacity, power_HP;
    std::string registration, colour;
    Car();
    Car(int worth, int cap, int HP, std::string regi, std::string farbe)
    {
        value = worth;
        capacity = cap;
        power_HP = HP;
        registration = regi;
        colour = farbe;
    }


};


class Warehouse
{

public:
    int capacity;

    Car storage[10];

    Warehouse();

    int getValue(int index, int parking)            // step 2, getting the car
    {
        std::cout << "\nseeing if car is at space " << index;
        if(index == parking)
        {
            return 1;
        }

        return 0;
    }




};

Warehouse::Warehouse()
{
}


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
    int parking = 1, found = 0, search = 1, toggel = 0, space = 10;

    Car Levon_car (3000,6,78,"12edyerv1","red");                      // object car
    Warehouse Parkplatzt_luzern;   // Fixed object Warehouse

    Parkplatzt_luzern.capacity = 35;

    Parkplatzt_luzern.storage[parking] = Levon_car;
    std::cout << "\n your car has entered the Parkplatzt";
    toggel = 1;

    if (toggel == 1)        // this it used to count the cars and say the space
    {
        space--;
        toggel = 0;
    }

    std::cout << "your car is parked at space " <<parking;
    found = Parkplatzt_luzern.getValue(search, parking);
    if(found == 1)
    {
        std::cout<< "\nyour car was found at parking space " <<search;
    }
    else
    {
        std::cout<<"\nyour car was not found at parking space "<< search;
    }

    std::cout << "\nthere are " << space <<" parking spots left";

    return 0;

};
