#include<iostream>
using namespace std;
class Counter{
    private:
    int count;
    public:
    Counter(){
        count=0;
    }
    Counter operator++(){
        ++count;
        return *this;
    }
    Counter operator++(int){
        Counter temp=*this;
        ++count;
        return temp;
    }
    Counter operator-(){
        Counter temp;
        temp.count=-count;
        return temp;
    }
    Counter operator+=(int value){
        count+=value;
        return *this;
    }
    friend int operator+=(int& value, Counter& counter);
    void display(){
        cout<<"Count: "<<count<<endl;
    }

};
int operator+=(int& value, Counter& counter){
    value+=counter.count;
    return value;
}

int main()
{
    Counter c1,c2,c3;
    c1.display();
    ++c1;
    c1.display();
    c2=c1++;
    c1.display();
    c2.display();
    c3=-c1;
    c3.display();
    c1+=5;
    c1.display();
    int value =10;
    value+=c1;
    cout<<value;

 return 0;
}