#include <iostream>
using namespace std;
class pre
{
private:
    int i;

public:
    pre()
    {
        i = 0;
    }
    pre(int a)
    {
        i = a;
    }
    void getData()
    {
        cout << "The value of i is: " << i << endl;
    }
    pre operator++()
    {
        pre temp;
        temp.i = ++i;
        return temp;
    }
};
int main()
{
    pre c1(10);
    pre c2;
    c2 = ++c1;
    c2.getData();
    return 0;
}