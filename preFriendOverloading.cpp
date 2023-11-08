#include<iostream>
using namespace std;

class pre {
private:
    int i;
public:
    pre() {
        i = 0;
    }
    pre(int a) {
        i = a;
    }
    void getData() {
        cout << "The value of i is: " << i << endl;
    }
    friend pre operator++(pre p1, pre p2);
};

pre operator++(pre p1, pre p2) {
    pre temp;
    temp.i = p1.i + p2.i;
    return temp;
}

int main() {
    pre p1(10);
    pre p2;
    p2 = operator++(p1, p2); // Since it's a friend function, you can also call it like this: p2 = ++p1;
    p2.getData();

    return 0;
}
