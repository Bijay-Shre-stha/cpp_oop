#include <iostream>
using namespace std;
class Employee
{
protected:
    string name;
    float salary;

public:
    Employee(string name, float salary)
    {
        this->name = name;
        this->salary = salary;
    }
    void getData()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};
class Developer: public Employee{
    private:
    string programmingLanguage;
    public:
    Developer(string name, float salary, string programmingLanguage):Employee( name,  salary){
        this->programmingLanguage = programmingLanguage;
    }
    void getInfo(){
        getData();
        cout<<"Programming Language: "<<programmingLanguage<<endl;
    }
};

int main()
{
    Developer d1("Bijay", 150000, "C++");
    d1.getInfo();
    return 0;
}