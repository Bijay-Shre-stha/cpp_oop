#include<iostream>
using namespace std;
class Base{
    public:
    int x;
    void getData(){
        cout<<"Enter the value of x: ";
        cin>>x;
    }
};
class Derived:public Base{
    public:
    int y;
    void readData(){
        cout<<"Enter the value of y: ";
        cin>>y;
    }
    void Product(){
        cout<<"The product of x and y is: "<<x*y<<endl;
    }
};
int main()
{
    Derived d1;
    d1.getData();
    d1.readData();
    d1.Product();
 return 0;
}