#include<iostream>
using namespace std;

int area(int a, int b){
    return a*b;
}
int area(int a){
    return a*a;
}
float area(float a, float b){
    return 0.5*a*b;
}



int main()
{

    cout<<"The area of rectangle is: "<<area(5,6)<<endl;
    cout<<"The area of square is: "<<area(5)<<endl;
    cout<<"The area of triangle is: "<<area(5.5f,6.5f)<<endl;
    
 return 0;
}