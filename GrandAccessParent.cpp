#include<iostream>
using namespace std;
class Parent{
    protected:
    int baseData;
};

class Child1 : virtual public Parent
{

};

class Child2 :virtual public Parent{

};

class GrandChild : public Child1, public Child2{
public:
int getData(){
    return baseData;
}

};


int main()
{
    GrandChild gc;
    cout<<gc.getData()<<endl;
 return 0;
}