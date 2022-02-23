#include <iostream>
#include <conio.h>
using namespace std;

class sport
{
    protected:
        int score;
    
    public:
        void get_data_1()
        {
            cout<<"\nEnter score: ";cin>>score;
        }
};

class marks
{
    protected:
        int s1, s2, s3;
        
    public:
        void get_data_2()
        {
            cout<<"\nEnter marks of subjects: ";cin>>s1>>s2>>s3;
        }

};

class Result: public sport, public marks
{
    private:
        int roll_no, total;
        char name[100];
        float avg;

    public:
        void get()
        {
            cout<<"\nNeter roll no: ";cin>>roll_no;
            cout<<"\nEnter name: ";cin>>name;
            get_data_1();
            get_data_2();
        }

        void cal()
        {
            total = s1 + s2 + s3 + score;
            avg = float(total/3);
        }

        void show()
        {
            cout<<"\nRoll no   :"<<roll_no<<endl;
            cout<<"\nName      :"<<name<<endl;
            cout<<"\nMarks     :"<<s1<<"\t"<<s2<<"\t"<<s3<<endl;
            cout<<"\nScore     :"<<score<<endl;
            cout<<"\nTotal     :"<<total<<endl;
            cout<<"\nPercentage: "<<avg<<endl;
        }
};

int main(int argc, char const *argv[])
{

    Result robj1;
    cout<<"\nEnter data of student: ";
    robj1.get();
    robj1.cal();
    cout<<"\n===================\\Marksheet//===================\n";
    robj1.show();
    cout<<"\n===================\\All the Best//===================\n";
    getch();

    return 0;
}









