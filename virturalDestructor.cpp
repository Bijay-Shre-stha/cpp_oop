#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Constructor of Base" << endl;
    }
    // virtual ~Base()
    virtual ~Base()
    {
        cout << "Destructor of Base" << endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Constructor of Derived" << endl;
    }
    ~Derived()
    {
        cout << "Destructor of Derived" << endl;
    }
};
int main()
{
    Base *b = new Derived;
    delete b;
    return 0;
}