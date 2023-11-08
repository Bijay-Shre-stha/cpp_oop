#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    cout<<setw(0)<<"Deerwalk"<<setw(15)<<"Institute of"<<setw(13)<<"Technology";
    float f = 3.14169;
    cout << setprecision(2) << f << endl;
    cout << setprecision(3) << f << endl;
    cout << setprecision(4) << f;
}
