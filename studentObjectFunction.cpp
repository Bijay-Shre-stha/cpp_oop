#include <iostream>
using namespace std;
class marks
{
private:
    int mark;

public:
    marks()
    {
        mark = 0;
    }
    marks(int m)
    {
        mark = m;
    }
    marks addMarks(marks m1, marks m2)
    {
        marks temp;
        temp.mark = m1.mark + m2.mark;
        return temp;
    }
    void display()
    {
        cout << "Hari's Marks: " << mark << endl;
    }
};
int main()
{
    marks m1(10);
    marks m2(20);
    marks m3;
    m3 = m3.addMarks(m1, m2);
    m3.display();

    return 0;
}