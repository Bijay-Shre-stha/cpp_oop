#include<iostream>
using namespace std;
class Country{
    string name;
    int pop;
    public:
    Country(string nm, int p){
        name=nm;
        pop=p;
    }
    void show(){
        cout<<name;
    }
};
class Person{
    private:
    string name;
    Country * country;
    public:
    Person(string nm, Country * c){
        name=nm;
        country=c;
    }
    void showData(){
        cout<<name;
        country->show();
    }
};
int main(){
    Country *country = new Country("Nepal",1000);
    Person p("Bijay", country);
    p.showData();
}
