#include <iostream>
#include <conio.h>
using namespace std;

class PhoneBill
{
    protected:
        int bill_no; char cname[100];

    public:
        void get_bill()
        {
            cout<<"\nEnter bill no :"; cin>>bill_no;
            cout<<"\nEnter name :"; cin>>cname;
        }
}; // (grandparent) base class ends

class Landline:virtual public PhoneBill
{
    protected:
        int phno, lcalls, lrate, lamt;

    public:
        void getll()
        {
            cout<<"\nEnter phone number: ";cin>>phno;
            cout<<"\nEnter total calls: ";cin>>lcalls;
            cout<<"\nEnter rate per call: ";cin>>lrate;
        }

        void callamnt()
        {
            lamt = lcalls*lrate;
        }
};// parent class1 ends here

class Mobile:virtual public PhoneBill
{
    protected:
        int mno, mcalls, mrate, sms;
        float mamt;

    public:
        void get_mob()
        {
            cout<<"\nEnter mobile no: ";cin>>mno;
            cout<<"\nEnter total no. of calls: ";cin>>mcalls;
            cout<<"\nEnter rate per call: ";cin>>mrate;
            cout<<"\nEnter total sms: ";cin>>sms;
        }

    void callamt()
    {
        float samt = sms*1.5f;
        mamt = (mcalls+mrate)*samt;
    }
};// parent class2 ends here

class FinalBill:public Landline, public Mobile
{
    private:
        int grosscalls;
        float tamt;

    public:
        void cal()
        {
            callamnt();
            callamt();
            grosscalls = lcalls+mcalls;
            tamt = mamt + lamt;
            float tax = tamt * 0.02;
            tamt = tamt - tax;

        }

        void show()
        {
            cout<<"\nPhone bill no        : "<<bill_no<<endl;
            cout<<"Customer name        :"<<cname<<endl;
            cout<<"\n==================\\ Landline Details //=================="<<endl;
            cout<<"Landline phno        : "<<phno<<endl;
            cout<<"Total landline calls : "<<lcalls<<endl;
            cout<<"Landline bill          : "<<lamt;
            cout<<"\n==================\\ Mobile Details //=================="<<endl;
            cout<<"Mobile no           :"<<mno<<endl;
            cout<<"Total mobile calls  :"<<mcalls<<endl;
            cout<<"Mobile Bill         :"<<mamt<<endl;
            cout<<"\n==================\\ Final Bill //=================="<<endl;
            cout<<"Gross calls         :"<<grosscalls<<endl;
            cout<<"Total amount due    :"<<tamt<<endl;
        } 
};

int main(int argc, char const *argv[])
{
    FinalBill fobj;
    fobj.get_bill();
    fobj.getll();
    fobj.get_mob();
    fobj.cal();
    cout<<"\n==================\\Phone Bill//==================\n";
    fobj.show();
    cout<<"\n==================\\Nigh ghari//==================\n";
    getch();
    return 0;
}
