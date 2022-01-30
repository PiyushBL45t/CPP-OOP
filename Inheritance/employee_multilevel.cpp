#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

class Employee
{
    protected:  
        int ID, exp, basic_sal;
        char name[100], dept[10];

    public:
        void get_data()
        {
            cout<<"\nEnter employee ID: ";cin>>ID;
            cout<<"\nEnter employee name: ";cin>>name;
            cout<<"\nEnter department name: ";cin>>dept;
            cout<<"\nEnter basic salary: ";cin>>basic_sal;
            cout<<"\nEnter employee experience: ";cin>>exp;
        }

        void show_emp()
        {
            cout<<setw(10)<<ID<<setw(10)<<name<<setw(10)<<dept<<setw(10)<<exp<<setw(10)<<basic_sal<<endl;
        }
    
}; // base class ends here

class Bonus:public Employee
{
    protected:
        float bonus, total_gross;
        char grade;

    public:
        void cal_bt()
        {
            get_data();
            cout<<"\nEnter grade: ";cin>>grade;

            //if block to calculate bonus
            if (exp > 5)
            {
                if (grade == 'A' || grade == 'a')
                {
                    bonus = 0.5*basic_sal;
                }

                else if (grade == 'B' || grade == 'b')
                {
                    bonus = 0.3*basic_sal;
                }

                else if (grade == 'C' || grade == 'c')
                {
                    bonus = 0.2*basic_sal;
                }else
                {
                    bonus = 0;
                }
                total_gross = basic_sal + bonus;               
            }            
        }

        void show_bonus()
        {
            show_emp();
            cout<<"\n----------------------------------------------";
            cout<<"\nGrade        : "<<grade<<endl;
            cout<<"\nBonus        : "<<bonus<<endl;
            cout<<"\nTotal gross  : "<<total_gross<<endl;
            cout<<"\n----------------------------------------------";

        }
}; // derieved class - 1 ends here


class Netpay:public Bonus
{
    private:
        int ptax, net_salary;

    public:
        void take_payment_info()
        {
            cal_bt();
            if (total_gross >= 50000 && total_gross <= 10000)
            {
                ptax = total_gross*0.03;
            }
            else if (total_gross > 200000)
            {
                ptax = total_gross*0.05;
            }
            net_salary = total_gross - ptax;
        }

        void show_pay()
        {
            show_bonus();
            cout<<"\nProfessional tax: --------> "<<ptax<<endl;
            cout<<"\nNet Salary      : --------> "<<net_salary<<endl;
        }
}; //derieved class - 2 ends here

int main(int argc, char const *argv[])
{
    Netpay n; // netpay class object
    cout<<"\nEnter record of employee: "<<endl;
    n.take_payment_info();
    cout<<"=======================\\ Payment Slip //=======================\n";
    cout<<setw(10)<<"ID"<<setw(10)<<"name"<<setw(10)<<"dept"<<setw(10)<<"exp"<<setw(10)<<"basic_sal"<<endl;
    n.show_pay();
    getch();
    
    return 0;
}
