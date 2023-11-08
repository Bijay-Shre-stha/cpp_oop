#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    int setLength(int l)
    {
        length = l;
    }
    int setBreadth(int b)
    {
        breadth = b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getArea()
    {
        return length * breadth;
    }
};
int main()
{
    int l, b;
    Rectangle r1;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    r1.setLength(l);
    r1.setBreadth(b);
    cout << "Length of Rectangle is: " << r1.getLength() << endl;
    cout << "Breadth of Rectangle is: " << r1.getBreadth() << endl;
    cout << "Area of Rectangle is: " << r1.getArea() << endl;
    return 0;
}