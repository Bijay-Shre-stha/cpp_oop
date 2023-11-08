#include<iostream>
using namespace std;
class Instrument{
    public:
    virtual void makeSound()=0;

};
class Guitar :  public Instrument{
    public:
    void makeSound(){
        cout<<"Guitar is making sound"<<endl;
    }
};

int main()
{
    Instrument *ptr = new Guitar;
    ptr->makeSound();

 return 0;
}