#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
using std::string;

class car
{
    private:
        char name[100], type[100];
        int price;
        

    public:
        void get_data();
        void show_data();
};

void car::get_data()
{
    cout<<"\n\nEnter the data for your car: "<<endl;
    cout<<"\nEnter name: ";
    cin>>name;
    cout<<"\nEnter the type of our car: ";
    cin>>type;
    cout<<"\nEnter the price of your car: ";
    cin>>price;

    return;
}

void car::show_data()
{
    cout<<"\n\nDisplaying the data for your car: ";
    cout<<"\nName: "<<name<<endl;
    cout<<"Type: "<<type<<endl;
    cout<<"Price"<<price<<endl;
    return;
}

int main(void)
{
    car c1, c2; // class objects
    c1.get_data();
    c1.show_data();

    c2.get_data();
    c2.show_data();


    return 0;
}
