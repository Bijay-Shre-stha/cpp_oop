#include<iostream>
using namespace std;
class post{
    private:
    int i;
    public:
    post(){
        i=0;
    }
    post(int a){
        i=a;
    }
    void getData(){
        cout<<"The value of i is: "<<i<<endl;
    }
    post operator++(int){
        post temp;
        temp.i=++i;
        return temp;
    }

};
int main()
{
    post c1(10);
    post c2;
    c2=c1++;
    c2.getData();
 return 0;
}