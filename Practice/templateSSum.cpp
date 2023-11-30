#include <iostream>
using namespace std;
template <class T>
T sum(T a, T b)
{
    return a + b;
}
int main()
{
    cout << " sum of int " << sum(10, 20)<<endl;
    cout << " sum of float " << sum(10.5, 20.5);
    return 0;
}