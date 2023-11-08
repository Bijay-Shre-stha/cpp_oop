#include <iostream>

#include <fstream>

#include <string>

using namespace std;

int main()
{
    ifstream inputFile("test.txt");
    if (inputFile.is_open())
    {
        string line;
        while (getline(inputFile, line))
        {
            cout << line << endl;
        }

        inputFile.close();
    }
    else
    {
        cout << "Failed to open the file." << endl;
    }

    return 0;
}