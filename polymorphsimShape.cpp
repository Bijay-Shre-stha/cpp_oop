#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw(){
        cout<<"Shape is drawn"<<endl;
    }
};
class Rectangle : public Shape{
    public:
    void draw(){
        cout<<"Rectangle is drawn"<<endl;
    }
};
class Circle : public Shape{
    public:
    void draw(){
        cout<<"Circle is drawn"<<endl;
    }
};
class cuboid : public Shape{
    public:
    void draw(){
        cout<<"cuboid is drawn"<<endl;
    }
};
int main()
{
    Shape *ptr[] = {new Rectangle, new Circle, new cuboid};
    for(auto i=0;i<3;++i){
        ptr[i]->draw();
    }
 return 0;
}