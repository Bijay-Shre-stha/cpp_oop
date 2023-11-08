#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    static string collegeName;

    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void displayCollegeName() {
        cout << collegeName;
    }
};

string Student::collegeName = "Deerwalk";

int main() {
    Student s1(101, "Scnu");
    Student s2(102, "Sana");
    string s3=("Bijay");
    // s1+s2;

    // cout << s1.collegeName << endl;
    // cout << s2.collegeName << endl;
    // s1.displayCollegeName();
    // Student::collegeName = "Deerhold";
    // cout << s1.collegeName << endl;
    // cout << s2.collegeName << endl;
    return 0;
}
