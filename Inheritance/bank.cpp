#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class Bank
{
    protected:
        int accno, bal, year;
        char accname[100];
    
    public:
        void get_data(){
            cout<<"\nEnter account number: ";
            cin>>accno;
            cout<<"\nEnter account holder name: ";
            cin>>accname;
            cout<<"\nEnter current account balance";
            cin>>bal;
            cout<<"\nEnter the year of investment: ";
            cin>>year;
        }

        void show_acc(){
            cout<<"\nAccount number        :"<<accno<<endl;
            cout<<"\nAccount holder name   : "<<accname<<endl;
            cout<<"\nCurrent balance       : "<<bal<<endl;
            cout<<"\nYears of investment   :"<<year<<endl;
        }

};// base class bank ends

class Savings:public Bank
{
    private:
        float rate, interest;
        
    public:
        void calculate();
        void show_interest();
  
};// derieved class ends

void Savings::calculate()
{
    cout<<"\nEnter rate of interest: ";
    cin>>rate;
    rate = rate*0.01F;
    interest = bal*rate;
}

void Savings::show_interest(){
    cout<<"Interest Rate      :"<<rate<<endl;
    cout<<"Interset           :"<<interest<<endl;
    cout<<"New Balance        :"<<(bal+interest)<<endl;
}

int main(int argc, char const *argv[])
{
    Savings sobj1;
    cout<<"\nEnter details of account: ";
    sobj1.get_data();
    sobj1.calculate();
    cout<<"\nHere are the account details:------------------------------\n ";
    sobj1.show_acc();
    sobj1.show_interest();
    cout<<"----------------------------------------------------------------";

    return 0;
}
