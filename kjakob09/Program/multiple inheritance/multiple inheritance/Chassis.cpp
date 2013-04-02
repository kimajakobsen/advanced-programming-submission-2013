#include "Chassis.h"


void Chassis::paint(std::string color)
{
    Chassis::_color=color;
};
std::string Chassis::getColor() const
{
    return Chassis::_color;
};
bool Chassis::waterTight()
{
    return false;
};
bool Chassis::airTight()
{
    return false;
};
void Chassis::hit(int VehicleWeight)
{
    int damage = VehicleWeight*3;
    (Chassis::_durability>damage) ? Chassis::_durability = Chassis::_durability - damage :  Chassis::_durability = 0; 
};
int Chassis::getDurability()
{
    return Chassis::_durability;
};

int Chassis::getWeight()
{
    return Chassis::_weight;
}