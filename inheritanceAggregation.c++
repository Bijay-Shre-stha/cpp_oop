#include<iostream>
using namespace std;
class Address{
    private:
    string address;
    public:
    Address(){}
    Address(string address){
        this->address=address;
    }
    void setAddress(string address){
        this->address=address;
    }
    string getAddress(){
        return address;
    }
    ~Address(){
        cout<<"Address destructor called"<<endl;
    }
};
class Person{
    private:
    string name;
    Address *address;
    public:
    Person(){}
    Person(string name,Address *address){
        this->name=name;
        this->address=address;
    }
    void setName(string name){
        this->name=name;
    }
    void setAddress(Address *address){
        this->address=address;
    }
    string getName(){
        return name;
    }
    Address getAddress(){
        return *address;
    }
    ~Person(){
        cout<<"Person destructor called"<<endl;
    }
};
int main()
{
    Address a1("Mumbai");
    Person p1("Heena",&a1);
    cout<<p1.getName()<<" lives in "<<p1.getAddress().getAddress()<<endl;
    
 return 0;
}