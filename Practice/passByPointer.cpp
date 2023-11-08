#include <iostream>
using namespace std;
void value(int *x)
{
    *x = *x + 10;
    cout << "Pass by Pointer function: " << *x << endl;
}
int main()
{
    int a = 5;
    value(&a);
    return 0;
}