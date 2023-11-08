#include<iostream>
using namespace std;
class Animal{
    public:
    void info(){
        cout<<"I am an animal"<<endl;
    }
};
class Dog:public Animal{
    public:
    void bark(){
        cout<<"I am a dog"<<endl;
    }
};
class Cat:public Animal{
    public:
    void meow(){
        cout<<"I am a cat"<<endl;
    }
};
int main()
{
    Dog d1;
    cout<<"Dog class: ";
    d1.info();
    d1.bark();
    Cat c1;
    cout<<"Cat class: ";
    c1.info();
    c1.meow();
 return 0;
}