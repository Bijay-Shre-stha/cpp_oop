#include<iostream>
using namespace std;
int main(){
    int x=10;
    cout<<&x<<endl;
    int *ptr;
    ptr=&x;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr=20;
    cout<<*ptr<<endl;
    cout<<x;
    }