// Multiple Inheritacne student
#include<iostream>
using namespace std;
int roll_no,math,physics,chemistry,total,per;
char name[10];
class student
{
    public:
    void getdata()
    {
        cout<<"\n enter roll_no : ";
        cin>>roll_no;
        cout<<"\n enter name : ";
        cin>>name;
        cout<<"\n enter math : ";
        cin>>math;
        cout<<"\n enter physics : ";
        cin>>physics;
        cout<<"\n enter chemistry : ";
        cin>>chemistry;
    }
};
class mark
{
    public:
    void calculate()
    {
        total=math+physics+chemistry;
        per=total/3;
    }
};
class result:public student,public mark
{
    public:
    void show()
    {
        cout<<"\n----------------------------------\n";
        cout<<"\n roll_no : "<<roll_no;
        cout<<"\n name : "<<name;
        cout<<"\n----------------------------------\n";
        cout<<"\n math : "<<math;
        cout<<"\n physics : "<<physics;
        cout<<"\n chemistry : "<<chemistry;
        cout<<"\n----------------------------------\n";
        cout<<"\n total : "<<total;
        cout<<"\n per : "<<per;
        cout<<"\n----------------------------------\n";
    }
};
int main()
{
    result obj;
    obj.getdata();
    obj.calculate();
    obj.show();
}