#include <iostream>

void modifyReference(int &x) {
    x = x + 10;
    std::cout << "Inside function: " << x << std::endl;
}

int main() {
    int b = 7;
    modifyReference(b);
    std::cout << "Outside function: " << b << std::endl; // Output: Inside function: 17, Outside function: 17
    return 0;
}
