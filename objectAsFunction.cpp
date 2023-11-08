#include <iostream>
using namespace std;
class Distance
{
private:
    int feet, inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int ft, int in)
    {
        feet = ft;
        inch = in;
    }
    Distance addTwoNumber( Distance d2)
    {
        Distance temp;
        temp.feet =feet + d2.feet;
        temp.inch =inch + d2.inch;
        return temp;
        // feet = d1.feet + d2.feet;
        // inch = d1.inch + d2.inch;
        // cout << "Sum of feet and inch: " << feet << " feet " << inch << " inch " << endl;
    }
    void getData()
    {
        cout << "Sum of feet and inch: " << feet << " feet " << inch << " inch " << endl;
    }
    // void getFeet(Distance d1, Distance d2){
    //     cout << "Feet: " << d1.feet << endl;
    //     cout << "Feet: " << d2.feet << endl;

    // }
    // void getInch(Distance d1, Distance d2){
    //     cout << "Inch: " << d1.inch << endl;
    //     cout << "Inch: " << d2.inch << endl;
    // }
    
};
int main()
{
    Distance d1(9, 3);
    Distance d2(10, 4);
    Distance d3,d4;
    // d3.addTwoNumber(d1, d2);
    d4 = d3.addTwoNumber(d1);
    d4.addTwoNumber(d1);
    d4.getData();
    // d3.getFeet(d1,d2);
    // d3.getInch(d1,d2);

    return 0;
}