#include <iostream>
using namespace std;
class student
{
    int roll;
    string name;

public:
    student(int r = 1209, string n = "Bijay")
    {
        roll = r;
        name = n;
    }
    void getData()
    {
        cout << "Name :" << name << " "<< "Roll no : " << roll << endl;
    }
};
int main()
{
    student s1;
    s1.getData();
    student s2(20);
    s2.getData();
    student s3(30, "Raul");
    s3.getData();
    return 0;
}