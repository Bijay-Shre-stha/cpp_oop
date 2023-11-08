#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int roll;
    public:
    void setData(string name,int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    void getData(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};
int main()
{
    student s1;
    s1.setData("Bijay",100);
    s1.getData();

    return 0;
}