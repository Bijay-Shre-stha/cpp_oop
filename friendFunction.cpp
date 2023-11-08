#include <iostream>
using namespace std;
// friend Function
class Complex
{
    public:
// private:
    int real, imaginary;

public:
    Complex()
    {
        real = 0;
        imaginary = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    // Complex addTwoNumbers(Complex c1, Complex c2){
    //     Complex temp;
    //     temp.real=c1.real+c2.real;
    //     temp.imaginary=c1.imaginary+c2.imaginary;
    //     cout<<"Sum of real and imaginary number is: "<<temp.real<<" + "<<temp.imaginary<<"i";
    //     return temp;
    // }
    friend Complex addTwoNumbers(Complex c1, Complex c2);
};
Complex addTwoNumbers(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    cout << "Sum of real and imaginary number is: " << temp.real << " + " << temp.imaginary << "i";
    return temp;
};


int main()
{
    Complex c1(10, 5);
    Complex c2(2, 4);
    Complex c3;
    // c3.addTwoNumbers(c1, c2);
    c3 = addTwoNumbers(c1, c2);
    // cout<<c3.real;
    // cout<<"Sum of real and imaginary number is: "<<c3.real<<" + "<<c3.imaginary<<"i";
    return 0;
}