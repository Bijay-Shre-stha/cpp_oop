#include<iostream>
using namespace std;
int main()
{
    int x=10, y=5,z;
    int *ptr1, *ptr2, *ptr3;
    ptr1=&x;
    ptr2=&y;
    ptr3=&z;
    cout<<"\nBefore swapping"<<endl;
    cout<<"The value of x is: "<<*ptr1<<endl;
    cout<<"The value of y is: "<<*ptr2<<endl;
    z=*ptr1;
    *ptr1=*ptr2;
    *ptr2=z;
    cout<<"\nAfter swapping"<<endl;
    cout<<"The value of x is: "<<*ptr1<<endl;
    cout<<"The value of y is: "<<*ptr2<<endl;
    return 0;
    // int arr[5];
    // cout<<"Enter the elements of the array:"<<endl;
    // for(int i=0;i<5;i++)
    // {
    //     // cin>>arr[i];
    //     cin>>*(arr+i);
    // }
    // for (int i=0; i<5; i++){
    //     cout<<"\noutput: "<<endl;
    //     // cout<<arr[i]<<endl;
    //     cout<<*(arr+i);
    // }
 return 0;
}