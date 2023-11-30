#include <iostream>
#include <cstring>
using namespace std;

void rev(char s[100])
{
    int i, j;
    char temp;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    cout << "Reversed string: " << s << endl;
}

int main()
{
    char s[100];
    cout << "Enter a string: ";
    cin.getline(s, 100);  // Use getline to read the entire line
    rev(s);
    return 0;
}


// #include <iostream>
// #include <algorithm>  // Include the algorithm header for std::reverse
// using namespace std;

// int main() {
//     cout << "Enter a string: ";
//     string s;
//     getline(cin, s);
//     reverse(s.begin(), s.end());
//     cout << "Reversed string: " << s << endl;
//     return 0;
// }

