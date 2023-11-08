// #include<iostream>
// using namespace std;
// // void swap(int a, int b)
// void swap(int &a, int &b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
// int main()
// {
//     int a=10, b=20;
//     cout<<"Before swapping: "<<endl;
//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b<<endl;
//     swap(a,b);
//     cout<<"After swapping: "<<endl;
//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b<<endl;
// return 0;
// }

#include <iostream>
using namespace std;
void swap(int, int);
int main()
{
    int x = 5, y = 10;
    cout << "calling function" << endl;
    cout << "x=" << x << endl
        << "y=" << y<<endl;
    swap(x, y);
    return 0;
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "called function" << endl;
    cout << "x=" << x << endl
        << "y=" << y << endl;
}
