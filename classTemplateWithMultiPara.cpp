#include <iostream>
using namespace std;

// Class template with two parameters
template <class T1, class T2>
class Test
{
    T1 a;
    T2 b;

public:
    Test(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << " and " << b << endl;
    }
};

// Main Function
int main()
{
    // instantiation with float and int type
    Test<float, int> test1(1.23, 123);

    // instantiation with float and char type
    Test<int, char> test2(100, 'W');

    test1.show();
    test2.show();

    return 0;
}