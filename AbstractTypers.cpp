#include <iostream>
using namespace std;
class Tyres
{
public:
    virtual void no_of_Tyres() = 0;
};
class Car : public Tyres
{
public:
    void no_of_Tyres()
    {
        cout << "Car has 4 tyres" << endl;
    }
};
class Bus : public Tyres
{
public:
    void no_of_Tyres()
    {
        cout << "Bus has 6 tyres" << endl;
    }
};
class Truck : public Tyres
{
public:
    void no_of_Tyres()
    {
        cout << "Truck has 8 tyres" << endl;
    }
};

int main()
{
    Tyres *ptr[] = {new Car, new Bus, new Truck};
    for (int i = 0; i < 3; ++i)
    {
        ptr[i]->no_of_Tyres();
    }
    return 0;
}