#include <iostream>
#include <conio.h>
using namespace std;

class BigBazaar
{
    private:
        int bill_no;
        string cust_name;
    
    public:
        void get_bill();
        void show_bill();    
};

void BigBazaar::get_bill(){
    cout<<"\nEnter bill no: ";cin>>bill_no;
    cout<<"\nEnter customer name: ";cin>>cust_name;
    
}

void BigBazaar::show_bill(){
    cout<<"\nBill no: "<<bill_no<<endl;
    cout<<"Customer name: "<<cust_name<<endl;
}

class FoodBazaar:public BigBazaar{

    private:
        int item_no, qty, rate, amount;
        string item_name;
        float food_discount, food_net_amount;

    public:
        void get_food();
        void calbill();
        void show();

};

void FoodBazaar::get_food(){
    get_bill();
    cout<<"\nEnter item no: ";cin>>item_no;
    cout<<"\nEnter item name: ";cin>>item_name;
    cout<<"\nEnter quantity: ";cin>>qty;
    cout<<"\nEnter item rate: ";cin>>rate;

}

void FoodBazaar::calbill(){
    amount = qty*rate;
    food_discount = amount*0.1;
    food_net_amount = amount - food_discount;
}

void FoodBazaar::show(){

    show_bill();
    calbill();
    cout<<"\nItem no      : "<<item_no<<endl;
    cout<<"Item name      : "<<item_name<<endl;
    cout<<"Item quantity  : "<<qty<<endl;
    cout<<"Item rate      : "<<rate<<endl;
    cout<<"Item amount    : "<<amount<<endl;
    cout<<"Item discount  : "<<food_discount<<endl;
    cout<<"Item net amount: "<<food_discount<<endl;

}

class ClothBazaar:public BigBazaar{

    private:
        int qty, price, amount;
        string type, name;
        float cloth_discount, cloth_net_amount;

    public:
        void get_cloth();
        void show_cloth();

};

void ClothBazaar::get_cloth(){
    get_bill();
    cout<<"\nEnter name: ";cin>>name;
    cout<<"\nEnter type: ";cin>>type;
    cout<<"\nEnter Quantity: ";cin>>qty;
    cout<<"\nEnter amount: ";cin>>amount;
    cout<<"\nEnter Price: ";cin>>price;
}

void ClothBazaar::show_cloth(){
    amount = qty*price;
    cloth_discount = amount*0.1;
    cloth_net_amount = amount - cloth_discount;
    show_bill();
    cout<<"\nName    : "<<name<<endl;
    cout<<"Type      : "<<type<<endl;
    cout<<"Quantity  : "<<qty<<endl;
    cout<<"Price     : "<<price<<endl;
    cout<<"Amount    : "<<amount<<endl;
    cout<<"Discount  : "<<cloth_discount<<endl;
    cout<<"Net amount: "<<cloth_net_amount<<endl;

}

int main(int argc, char const *argv[])
{
    int ch;
    while (ch <= 3)
    {
        cout<<"\n1. Food Bazaar: "<<endl;
        cout<<"\n2. Cloth Bazaar: "<<endl;
        cout<<"\n3: Exit: "<<endl;
        cout<<"\nEnter your choice: ";cin>>ch;

        switch (ch)
        {

            case 1:
            {
                FoodBazaar fobj;
                fobj.get_food();
                cout<<"\n============= Bill =============\n";
                fobj.show();
                cout<<"\n============= Thank You =============\n";
                break;
            }

            case 2:
            {
                ClothBazaar cobj;
                cobj.get_cloth();
                cout<<"\n============= Bill =============\n";
                cobj.show_cloth();
                cout<<"\n============= Thank You =============\n";
                break;
            }

            case 3:
            {
                exit(0);
                break;
            }                
        } // switch ends
    }// while ends     
    return 0;
}// main loop ends 
