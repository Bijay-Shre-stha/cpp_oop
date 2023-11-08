#include<iostream>
using namespace std;
template <class T1, class T2>
class student{
    private:
    T1 x;
    T2 y;
    public:
    student(T1 a, T2 b){
        x=a;
        y=b;
    }
    void getData(){
        cout<<x<<endl<<y<<endl;
    }
};
int main()
{
    student<int , double> s1(10,20.f);
    student <float, int> s2 (10.10f,22 );
    s1.getData();
    s2.getData();
 return 0;
}