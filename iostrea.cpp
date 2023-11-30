#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;

    friend istream& operator>>(istream& is, Person& person) {
        return is >> person.name >> person.age;
    }
    friend ostream& operator<<(ostream& os, Person& person) {
        return os << "Name: " << person.name << ", Age: " << person.age;
    }

};

int main() {
    Person person;
    cout << "Enter name and age for Person: ";
    cin >> person;
    cout << "Person : " << person << endl;

    return 0;
}
