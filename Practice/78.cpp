#include <iostream>
using namespace std;

class Account
{
private:
    int accountNo;
    int balance;
    static int min_balance; // Declare the static variable
public:
    void read()
    {
        cout << "Enter account number: ";
        cin >> accountNo;
        cout << "Enter balance: ";
        cin >> balance;
    }
    void show()
    {
        cout << "Account number: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
    static void display_min_bal()
    {
        cout << "Minimum balance: " << min_balance << endl;
    }
};

int Account::min_balance = 1000; // Initialize the static variable

int main()
{
    Account accounts[5];
    for (int i = 0; i < 1; i++)
    {
        accounts[i].read();
        accounts[i].show();
        Account::display_min_bal(); // Call the static function using the class name
    }
    return 0;
}
