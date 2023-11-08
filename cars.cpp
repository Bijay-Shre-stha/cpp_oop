#include <iostream>
using namespace std;
class car
{
private:
    int model, speed;
    string carName;

public:
    car()
    {
        speed = 0;
    }
    car(int _model, int _speed, string _carName)
    {
        model = _model;
        speed = _speed;
        carName = _carName;
    }
    void accelerate()
    {
        speed = speed + 5;
    }
    void brake()
    {
        speed = speed - 5;
    }
    int getData()
    {
        cout << carName << " is at " << speed << "km/s speed" << endl;
        return speed;
    }
};

int main()
{
    car Toyota(1920, 0, "Toyota");
    Toyota.accelerate();
    Toyota.accelerate();
    Toyota.accelerate();
    Toyota.accelerate();
    Toyota.accelerate();
    Toyota.brake();
    Toyota.getData();
    return 0;
}