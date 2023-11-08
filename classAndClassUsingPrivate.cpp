#include <iostream>
using namespace std;

class Product
{
private:
    int x, y;

public:
    Product(int a, int b)
    {
        this->x = a;
        this->y = b;
    }
    int getA()
    {
        return this->x;
    }
    int getB()
    {
        return this->y;
    }
    void getData()
    {
        cout << "The value of x is: " << x << endl;
        cout << "The value of y is: " << y << endl;
    }
    
};

class Item
{
private:
    int x, y;

public:
    Item() {}
    Item(int a, int b)
    {
        this->x = a;
        this->y = b;
    }
    void getData()
    {
        cout << "This is a conversion constructor" << endl;
        cout << "The value of x from Item is: " << x << endl;
        cout << "The value of y from Item is: " << y << endl;
    }
    Item(Product p1)
    {
        x = p1.getA();
        y = p1.getB();
    }
};
int main()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    Item i1;
    Product p1(a, b);
    i1 = p1;
    p1.getData();
    i1.getData();
    return 0;
}