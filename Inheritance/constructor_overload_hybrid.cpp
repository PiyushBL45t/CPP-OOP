#include <iostream>
#include <conio.h>
using namespace std;

class Base
{
    protected:
    int a;

    public:
        Base(int aa){
            a = aa;
            cout<<"\nBase constructed...";
        }
        
}; // class ends

class Derieved1:public Base
{
    protected:
        float b;

    public:
        Derieved1(int a, float bb):Base(a){
            b = bb;
            cout<<"\nDerieved1 constructed...";
        }

};// derieved class 1 ends

class Derieved2:public Derieved1
{
    private:
        char ch;

    public:
        Derieved2(int a, float b, char chh):Derieved1(a, b){
            cout<<"\nDerived2 constructed...";
        }

        void show()
        {
            cout<<"\nBase integer        : "<<a<<endl;
            cout<<"\nDerieved1 float     : "<<b<<endl;
            cout<<"\nDerieved2 character : "<<ch<<endl;
        }
        
};// derieved class 2 ends

int main(int argc, char const *argv[])
{
    Derieved2 fobj(10, 10.2, 'a');
    fobj.show();
    getch();
    
    return 0;
}





