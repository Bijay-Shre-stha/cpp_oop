#include <iostream>
using namespace std;
class Engine
{
public:
    void getStart()
    {
        cout << "Engine started" << endl;
    }
};
class Car
{
private:
    Engine e;

public:
    void carStart()
    {
        e.getStart();
        cout<<"car start";
    }
};
int main()
{
    Car c;
    c.carStart();
    return 0;
}