#include <iostream>
using namespace std;
template <class R,class T, class T2>
R getMax(T x, T2 y)
// T2 getMax(T x, T2 y)

{
    return x > y ? x : y;
    
};
// double getMax(double x, double y){
//     return x>y?x:y;
// };
// char getMax(char x, char y){
//     return x>y?x:y;
// };

template <class t>
t getMin(t x, t y)
{
    return x < y ? x : y;
};

int main()
{
    cout << getMax<double, int, double>(10, 20.2f) << endl;
    // cout << getMax(10, 20.2f) << endl;
    // cout << getMax(10.5f, 20.5f) << endl;
    // cout << getMax('a', 'b') << endl;
    return 0;
}