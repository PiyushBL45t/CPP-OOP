/*  Inline function:
    This is one of the most perfect example of functions that have a function that resides inside a class.

    But the problem is inline classes preserve a separate memory block. This wastes a lot of memory.
*/
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

class rectangle
{
    private:
        int length, breadth;

    public:
        void set_data(int length, int breadth)
        {
            this->length = length;
            this->breadth = breadth;
        }

        int area(){ return(length*breadth); }
        int perimeter(){ return (2*(length+breadth)); }

        void show_data()
        {
            cout<<"Length: "<<length<<endl;
            cout<<"Breadth: "<<breadth<<endl;
            cout<<"Area: "<<area()<<endl;
            cout<<"Perimeter: "<<perimeter()<<endl;
        }


}; // class ends here


int main()
{
    rectangle r1, r2;
    r1.set_data(34, 44);
    cout<<"\nDetails of 1st triangle: ";
    r1.show_data();

    r2.set_data(3, 4);
    cout<<"\nDetails of 2nd triangle: ";
    r2.show_data();

    return 0;
}