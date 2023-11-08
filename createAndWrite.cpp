#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream myFile;
    myFile.open("test.txt", ios::out);
    if (myFile.is_open())
    {
        cout << "File created.";
    }
    myFile << "Writing in file";
    myFile.close();
    return 0;
}