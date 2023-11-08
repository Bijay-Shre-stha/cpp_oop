#include <iostream>
using namespace std;
class Counter
{
protected:
    int count;

public:
    Counter()
    {
        count = 0;
    }
    Counter(int c)
    {
        count = c;
    }
    Counter operator++()
    {
        // count=count+1;
        // cout<<"The count is: "<<count<<endl;
        cout << "Increment";
        this->count += 1;
        return *this;
    }
    void getData()
    {
        cout << "The count is: " << count << endl;
    };
};
class counterDec : public Counter
{
public:
    counterDec operator--()
    {
        cout << "Decrement";
        this->count -= 1;
        return *this;
    }
};

int main()
{
    counterDec c1;
    (++c1).getData();
    (++c1).getData();
    (--c1).getData();

    return 0;
}