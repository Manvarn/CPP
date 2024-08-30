//STtudent using Multilevel Inheritance
#include<iostream>
using namespace std;
class student
{
    public:
    int rollno,math,physics,chemistry;
    char name[10];

    void getdata()
    {
        cout<<"\n enter rollno : ";
        cin>>rollno;
        cout<<"\n enter name : ";
        cin>>name;
        cout<<"\n enter math : ";
        cin>>math;cout<<"\n enter physics : ";
        cin>>physics;
        cout<<"\n enter chemistry : ";
        cin>>chemistry;
    }
};
class marks:public student
{
    public:
    int total,per;
    void calculate()
    {
        total=math+physics+chemistry;
        per=total/3;
    }
};
class result:public marks
{
    public:
    void show()
    {
        cout<<"\n----------------------------------\n";
        cout<<"\n roll_no : "<<rollno;
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
    result s1;
    s1.getdata();
    s1.calculate();
    s1.show();
}
