#include<iostream>
using namespace std;
class Complex{
    private:
    int real;
    int img;
    public:
    Complex(){
        real=0;
        img=0;
    }
    Complex(int a,int b){
        real=a;
        img=b;
    }
    void getData(){
        cout<<"The value of real is: "<<real<<endl;
    }
    Complex (int a, int b){
        real=a;
        img=b;
    }
};

int main()
{
    Complex c1(10,20); 
    c1.getData();
    int x =10;
    c1=x;
    c1.getData();

 return 0;
}