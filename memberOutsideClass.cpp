#include <iostream>
using namespace std;
class Student
{
    int roll;
    string name;

public:
    Student()
    {
    }
    Student(int r, string n)
    {
        roll = r;
        name = n;
    }
    void getData();
};
void Student::getData()
{
    cout << roll << "\t" << name;
}
int main()
{
    Student s1(101, "Scnu");
    s1.getData();
    return 0;
}