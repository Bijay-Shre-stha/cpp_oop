#include <iostream>

#include <fstream>

#include <string>

using namespace std;

int main()
{
    ifstream inputFile("test.txt");
    ofstream outputFile("test_copy.txt");

    if (inputFile.is_open() && outputFile.is_open())
    {
        string line;

        while (getline(inputFile, line))
        {
            outputFile << line << "\n";
        }

        inputFile.close();
        outputFile.close();

        cout << "File copied successfully." << endl;
    }
    else
    {
        cout << "Failed to open the files." << endl;
    }

    return 0;
}
