#include <iostream>
using namespace std;

class employee
{
private:
    int payRate;
    int hourWorked;
    int totalPay;

public:
    int voidDisplay()
    {
        cout<<"Enter the payRate:"<<endl;
        cin>>payRate;
        cout<<"Enter the hourWorked:"<<endl;
        cin>>hourWorked;
        if(hourWorked>=60){
            cout<<"Wrong input";
            system("pause");
        }
        else{
        totalPay=payRate*hourWorked;
        cout<<"Total pay is: "<<totalPay;
        }
    }

};
int main()
{
    int n;
    cout<<"Enter the number of employee: ";
    cin>>n;
    employee e[n];
    for(int i=0;i<n;i++)
    {
        e[i].voidDisplay();
        cout<<"\n";
    }
    return 0;
}