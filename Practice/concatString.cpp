#include <iostream>
#include <string>

using namespace std;

class Concatenate {
public:
    string operator()( string &str1,  string &str2) {
        return str1 + str2;
    }
};

int main() {
    string s1, s2;

    cout << "Enter the first string: ";
    cin >> s1;

    cout << "Enter the second string: ";
    cin >> s2;

    Concatenate concatenate;
    string result = concatenate(s1, s2);

    cout << "Concatenated string is: " << result << endl;

    return 0;
}
