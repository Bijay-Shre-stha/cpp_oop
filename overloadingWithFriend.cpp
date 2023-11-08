#include <iostream>
using namespace std;
class Complex
{
private:
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
    void getData()
    {
        cout << "The real part is: " << real << endl;
        cout << "The imaginary part is: " << imaginary << endl;
    }
    friend Complex operator+(Complex c1, Complex c2);
};
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    cout << "Sum of real and imaginary number is: " << temp.real << " + " << temp.imaginary << "i" << endl;
    return temp;
}
int main()
{
    Complex c1(10, 5);
    Complex c2(2, 4);
    Complex c3;
    c3 = c1 + c2;
    c3.getData();
    return 0;
}