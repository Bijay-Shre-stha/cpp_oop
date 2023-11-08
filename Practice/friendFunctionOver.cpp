#include<iostream>
using namespace std;
class Add{
    int a;
    public:
    Add(){
        a=0;
    }
    Add(int x){
        a=x;
    }
    friend Add operator+(Add a1, Add a2);
};
Add operator+(Add a1, Add a2){
    Add temp;
    temp.a=a1.a+a2.a;
    cout<<"Sum of is: "<<temp.a;
}
int main()
{
    Add a1(10);
    Add a2(2);
    Add a3;
    a3=a1+a2;
 return 0;
}