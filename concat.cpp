#include <iostream>
#include <string>
using namespace std;
int concat(int a, int b)
{
	string s1 = to_string(a);
	string s2 = to_string(b);
	string s = s1 + s2;
	int c = stoi(s);
	return c;
}
int main()
{
	int a;
	int b;
	cout << "Enter two digits: ";
	cin >> a >> b;
	cout << concat(a, b) << endl;
	return 0;
}
