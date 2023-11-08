#include <iostream>
using namespace std;

class Birthday {
private:
    int day;
    int month;
    int year;

public:
    Birthday() {}
    Birthday(int d, int m, int y) {
        this->day = d;
        this->month = m;
        this->year = y;
    }
    void setData(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void showData() {
        cout << day << "/" << month << "/" << year << endl;
    }
    ~Birthday() {
        cout << "Birthday destructor called" << endl;
    }
};

class Person {
private:
    string name;
    Birthday birthday;

public:
    Person() {}
    Person(string name, Birthday birthday) {
        this->name = name;
        this->birthday = birthday;
    }
    void setData(string name, Birthday birthday) {
        this->name = name;
        this->birthday = birthday;
    }
    void showData() {
        cout << "Name: " << name << endl;
        cout << "Birthday: ";
        birthday.showData();
    }
    Birthday getBirthday() {
        return birthday;
    }
    ~Person() {
        cout << "Person destructor called" << endl;
    }
};

int main() {
    Birthday b1(15, 8, 1990);
    Person p1("Heena", b1);
    p1.showData();
    cout << "------------" << endl;
    return 0;
}
