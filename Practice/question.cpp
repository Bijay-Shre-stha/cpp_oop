#include <iostream>
using namespace std;

class Account
{
public:
    long int accountNo;
    long int balance;
    static long int min_balance;

    // Constructor
    Account(long int acc = 0.0, long int bal = 0.0)
    {
        accountNo = acc;
        balance = bal;
    }

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
        if (balance<min_balance){
            cout<<"Balance is less than minimum balance"<<endl;
        }
        
    }
};

// Initialize the static member variable
long int Account::min_balance = 500.0;

int main()
{
    Account accounts[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter data for Account " << (i + 1) << ":" << endl;
        accounts[i].read();
    }
    
    cout << "Minimum balance: " << Account::min_balance << endl; // Access the static member using the class name

    for (int i = 0; i < 5; i++)
    {
        cout << "Data for Account " << (i + 1) << ":" << endl;
        accounts[i].show();
    }

    return 0;
}
