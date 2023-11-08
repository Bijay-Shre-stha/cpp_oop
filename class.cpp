#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    string gender;

    void study()
    {
        cout << "studying" << endl;
    }
    void makeNoise()
    {
        cout << "making noise" << endl;
    }
};
int main()
{
    Student std1;
    Student std2;
    
    cout<<"\n";
    std1.name = "Bijay";
    std1.roll = 1209;
    std1.gender = "male";
    cout << std1.name << endl;
    cout << std1.roll << endl;
    cout << std1.gender << endl;
    cout<<"\n";

    std2.name = "Raul";
    std2.roll = 1208;
    std2.gender = "male";
    cout <<std2.name << endl;
    cout << std2.roll << endl;
    cout << std2.gender << endl;

    return 0;
}
