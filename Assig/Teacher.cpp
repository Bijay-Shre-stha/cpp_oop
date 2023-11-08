#include <iostream>
using namespace std;
class lecturer
{
protected:
    int id;
    string name;

public:
    void readData()
    {
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
    }
    void printData()
    {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
    }
};
class partTime : public lecturer
{
private:
    float payPerHours;

public:
    void readData()
    {
        lecturer::readData();
        cout << "Enter no of hours: ";
        cin >> payPerHours;
    }
    void printData()
    {
        lecturer::printData();
        cout << "Pay per hour: $" << payPerHours << endl;
    }
};
class fullTime : public lecturer
{
private:
    float payPerMonth;

public:
    void readData()
    {
        lecturer::readData();
        cout << "Enter salary per month: ";
        cin >> payPerMonth;
    }
    void printData()
    {
        lecturer::printData();
        cout << "Pay per month: $" << payPerMonth << endl;
    }
};

int main()
{
    partTime p;
    fullTime f;
    cout << "Enter part time lecturer details: " << endl;
    p.readData();
    cout << "Enter full time lecturer details: " << endl;
    f.readData();
    cout << "\n";
    cout << "Part time lecturer details: " << endl;
    p.printData();
    cout << "Full time lecturer details: " << endl;
    f.printData();
    return 0;
}