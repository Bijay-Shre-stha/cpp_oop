#include<iostream>
using namespace std;
class Printer{
    string name;
    int availablePages;
    public:
    Printer(string name,int availablePages){
        this->name=name;
        this->availablePages=availablePages;
    }
    void print(string content){
        int requiredPages = content.length()/5;
        if(availablePages>requiredPages){
            cout<<"Printing "<<content<<endl;
            availablePages-=requiredPages;
        }
        else{
            throw "Insufficient pages";
        }
    }
};
int main()
{
    Printer p("HP", 5);
    string content ="Bijay Shrestha";
    try{
        p.print(content);
        p.print(content);
        p.print(content);

    }
    catch (const char *e){
        cout<<e;

    }
 return 0;
}