#include<iostream>
#include<string.h>
using namespace std;
void reverse(char s[100]){
    int i,j;
    char temp;
    for(i=0,j=strlen(s)-1;i<j;i++,j--){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    
};
int main()
{
    char s[100];
    cout<<"Enter a string: ";
    cin.getline(s,100);
    reverse(s);
    cout<<"Reverse of the string: "<<s;
 return 0;
}