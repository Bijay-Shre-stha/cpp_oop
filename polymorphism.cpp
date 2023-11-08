#include <iostream>
using namespace std;
class Instrument
{
public:
    virtual void makeSound()
    {
        cout << "Instrument is making sound" << endl;
    }
};
class Piano : public Instrument
{
public:
    void makeSound()
    {
        cout << "Piano is making sound" << endl;
    }
};
class Guitar : public Instrument
{
public:
    void makeSound()
    {
        cout << "Guitar is making sound" << endl;
    }
};
int main()
{
    Instrument *ptr[] = {new Piano, new Guitar};
    for (auto i = 0; i < 2; ++i)
    {
        ptr[i]->makeSound();
    }
    return 0;
}