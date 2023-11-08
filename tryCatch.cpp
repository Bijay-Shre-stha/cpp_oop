#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    try
    {
        if (b == 0)
        {
            throw "expectation occur";
        }
        else
        {

            c = a / b;
            cout << "Result is: " << c << endl;
        }
    }
    catch (const char *e)
    {
        cout << e << endl;
        b = 1;
        c = a / b;
        cout << "After changing the value of b" << endl;
        cout << "Result is: " << c << endl;
    }

    cout << "Hello World";
    return 0;
}