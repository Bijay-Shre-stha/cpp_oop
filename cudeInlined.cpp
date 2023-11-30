#include<iostream>
using namespace std;
inline void cube(int a){
    cout<<a*a*a<<endl;
}
int main()
{
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    cube(a);
 return 0;
}