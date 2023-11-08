#include<iostream>
using namespace std;

// int sum(int a, int b);
int sum(int a, int b){
    int  sum;
    sum= a+b;
    return sum;
}
int main(){
    int n1, n2;
    cout<<"Enter the first number:";
    cin>>n1;
    cout<<"Enter the second number:";
    cin>>n2;
    cout<<"The sum of number: "<<sum(n1,n2);
}
