#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int *ptr = new int[size];
    for (int i = 0; i < size; ++i)
    {
        ptr[i] = i * 2;
    };
    cout << "Dynamic memory allocation"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " " ;
    }
    delete[] ptr;
    return 0;
}