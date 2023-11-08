#include <iostream>

template <typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second) : first(first), second(second) {}

    T1 getFirst() const {
        return first;
    }

    T2 getSecond() const {
        return second;
    }

private:
    T1 first;
    T2 second;
};

int main() {
    Pair<int, double> myPair(42, 3.14);

    std::cout << "First: " << myPair.getFirst() << std::endl;
    std::cout << "Second: " << myPair.getSecond() << std::endl;

    return 0;
}