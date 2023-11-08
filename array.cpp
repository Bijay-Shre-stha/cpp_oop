// #include<iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout<<"Enter the size:"<<endl;
//     cin>>size;
//     int *ptr=new int[size]; 
//     for (int i=0;i<size;i++){
//         cout<<"Array["<<i<<"]:";
//         cin>>ptr[i];
//     }
//     for(int i=0;i<size;i++){
//         cout<<*(ptr+i)<<endl;
    
//     }
//  return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int array[]={10,20,30,40,50};
    int *ptr=&array[2];
    cout<<ptr<<endl;
    cout<<&array[2]<<endl;
    cout<<array[2]<<endl;
    cout<<&array<<endl;
    cout<<array[0]<<endl;
    cout<<&array[0]<<endl;

 return 0;
}