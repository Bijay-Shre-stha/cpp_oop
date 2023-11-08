#include <iostream>
using namespace std;
class Product
{
public:
    int x, y;

public:
    Product()
    {
    }
    Product(int a, int b)
    {
        this->x = a;
        this->y = b;
    }
    void getData()
    {
        cout << "The value of x is: " << x << endl;
        cout << "The value of y is: " << y << endl;
    }
};
class Item
{
public:
    int x, y;

public:
    Item()
    {
    }
    Item(int a, int b)
    {
        this->x = a;
        this->y = b;
    }
    void getData()
    {
        cout << "The value of x is: " << x << endl;
        cout << "The value of y is: " << y << endl;
    }
    
    Item(Product p1){
        cout<<"This is a conversion constructor"<<endl;
        x=p1.x;
        y=p1.y;
    }
};
int main()
{
    Item i1;
    Product p1(10, 20);
    p1.getData();
    i1 = p1;
    i1.getData();

    return 0;
}