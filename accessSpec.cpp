#include <iostream>
using namespace std;
class base
{
private:
    int x;

protected:
    int y;

public:
    int z;
    base()
    {
        x = 10;
        y = 20;
        z = 30;
    }
};
class derived : private base
{
public:
    void show()
    {
        // cout<<x<<endl;
        cout << y << endl;
        cout << z << endl;
    }
};
int main()
{
    derived d;
    d.show();
    return 0;
}