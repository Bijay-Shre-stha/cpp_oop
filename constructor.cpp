#include <iostream>
using namespace std;
class Student
{
    int roll;
    string name;

public:
    Student()
    {
        cout << "I am default constructor"<<endl;
    }
    Student(int r, string n){
        roll = r;
        name = n;
        cout<<"I'm parameterized "<<endl;
    }
    Student(Student &s){
        name =s.name;
        roll = s.roll;
        cout<<"I'm copy constructor"<<endl;
    }
    void getData(){
        cout<<name<<"\n"<<roll;
    }
};
int main()
{
    Student s1;
    Student s2(101, "Sonu");
    Student s3= s2;
    s3.getData();
    return 0;
}