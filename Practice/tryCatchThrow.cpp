#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 0, c;
    try {
        if (b == 0) {
            throw "division is not possible";
        }
        c = a / b;
        cout << c;
    } catch (const char *e) {
        cout << e;
    }
    return 0;
}
