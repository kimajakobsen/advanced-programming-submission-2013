#include <iostream>
#include <string>

#include "Vehicle.h"
#include "DieselEngine.h"
#include "Wheels.h"
#include "Chassis.h"



using namespace std;


int main ()
{
    DieselEngine diesel;
    Wheels normalWheels;
    Chassis chassis("red");
    Vehicle *StationCar = new Vehicle(&diesel,&normalWheels,&chassis);

    

cout << StationCar->getWeight();
cin.get();
return 0;
}