// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout<<"Enter a character: ";
//     cin>>ch;
//     cout<<"ASCII value of "<<ch<<" is "<<int(ch);

//  return 0;
// }

// #include <iostream>
// using namespace std;
// inline int cube(int s) { return s * s * s; }
// int main()
// {
//     int i;
//     cout << "Enter an integer: ";
//     cin >> i;
//     cout << "The cube of " << i << " is: " << cube(i);
// 	return 0;
// // }
// #include <iostream>
// using namespace std;

// void swapIntegers(int& a, int& b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int num1 ;
//     int num2 ;
//     cout << "Enter two integers: ";
//     cin >> num1 >> num2;

//     cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 <<endl;

//     swapIntegers(num1, num2);

//     cout << "After swap: num1 = " << num1 << ", num2 = " << num2 <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void add(int a, int b)
// {
// cout << "sum = " << (a + b)<< endl ;
// }

// void add(double a, double b)
// {
// 	cout << "sum = " << (a + b);
// }

// // Driver code
// int main()
// {
// 	add(10, 2);
// 	add(5.3, 6.2);

// 	return 0;
// }

#include <iostream>
using namespace std;

float area(float h, float c)
{
    // float area = ;
    return 0.5 * c * h;
}

float area(float r)
{
    return 3.14 * r * r;
}

int area(int l)
{
    return l * l;
}

int area(int l, int b)
{
    return l * b;
}

int main()
{
    int l,c;
    float r, h,b;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> c;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter height and base of triangle: ";
    cin >> h >> b;

    cout << "Area of triangle: " << area(h, b) << endl;
    cout << "Area of rectangle: " <<area(l, c) << endl;
    cout << "Area of square: " << area(l) << endl;
    cout << "Area of circle: " << area(r) << endl;

    return 0;
}

// #include <iostream>
// using namespace std;
// int divide (int , int =2); // function declaration; with one default argument.
// int main ()
// {
// cout << divide (12); //default for 2nd argument.
// cout << endl;
// cout << divide (20,4); //pass all arguments explicitly.
// return 0;
// }
// int divide (int a, int b) //function definition
// {
// int r;
// r=a/b;
// return (r);
// }
