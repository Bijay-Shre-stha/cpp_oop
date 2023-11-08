#include<iostream>
using namespace std;
class Shape{
    protected:
    int radius;
    public:
    Shape(int radius){
        this->radius=radius;
    }
};
class Circle :public Shape{
    public:
    Circle(int radius):Shape(radius){}
    void display(){
        cout<<"The area of circle is "<<3.14*this->radius*this->radius<<endl;
        }
};
class Sphere :public Shape{
    public:
    Sphere(int radius):Shape(radius){}
    void display(){
        cout<<"The area of square is "<<4*3.14*this->radius*this->radius<<endl;
        }
};
int main()
{
    Circle c(5);
    Sphere s(5);
    c.display();
    s.display();
 return 0;
}