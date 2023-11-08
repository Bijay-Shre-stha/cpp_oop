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
        int count = 0;
        while (getline(inputFile, line))
        {
            count++;
        }

        cout << "Number of lines in the file: " << count << endl;

        inputFile.close();
    }
    else
    {
        cout << "Failed to open the file." << endl;
    }

    return 0;
}