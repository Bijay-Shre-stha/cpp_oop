#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    Counter& operator++() {    // Member function for pre-increment (++counter)

        ++count;
        return *this;
    }

    Counter operator++(int) {    // Member function for post-increment (counter++)

        Counter temp = *this;
        ++count;
        return temp;
    }

    Counter operator-() {    // Member function for unary minus (-counter)

        Counter temp;
        temp.count = -count;
        return temp;
    }

    Counter& operator+=(int value) {
        count += value;    // Member function for += operator (counter += value)

        return *this;
    }

    // Friend function for += operator with value on the left (value += counter)
    friend int& operator+=(int& value, const Counter& counter);

    void display() {
        cout << "Count: " << count << endl;
    }
};
// Definition of friend function

int& operator+=(int& value, const Counter& counter) {
    value += counter.count;
    return value;
}

int main() {
    Counter c1, c2, c3;
    c1.display(); // Count: 0
    
    // Pre-increment using member function
    ++c1;
    c1.display(); // Count: 1

    // Post-increment using member function
    c2 = c1++;
    c1.display(); // Count: 2
    c2.display(); // Count: 1

    // Unary minus using member function
    c3 = -c1;
    c3.display(); // Count: -2

    // += operator using member function
    c1 += 5;
    c1.display(); // Count: 7

    // += operator using friend function
    int value = 10;
    value += c1;
    cout << "Value: " << value << endl; // Value: 17

    return 0;
}
