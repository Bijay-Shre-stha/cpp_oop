#include<iostream>
using namespace std;
class A{
public:
    A(){
        cout<<"A() is constructor"<<endl;
    }
    ~A(){
        cout<<"~A() is deconstructor"<<endl;
    }
};
int main()
{
    A a;
    cout<<"hello";
 return 0;
}