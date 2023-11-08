#include <iostream>
using namespace std;

class circle
{
private:
    double radius;

public:
    circle(double r)
    {
        radius = r;
    }

    void setRadius(double new_radius)
    {
        radius = new_radius;
    }

    double getRadius()
    {
        return radius;
    }

    double getArea()
    {
        return 3.14 * radius * radius;
    }

    double getDiameter()
    {
        return 2 * radius;
    }

    double getCircumference()
    {
        return 2 * 3.14 * radius;
    }
};

int main()
{
int n;
    cout<<"Enter the number: ";
    cin >> n;
    circle c(n);
    cout << "Radius: " << c.getRadius() << endl;
    cout << "Area: " << c.getArea() << endl;
    cout << "Diameter: " << c.getDiameter() << endl;
    cout << "Circumference: " << c.getCircumference() << endl;
    return 0;
}
