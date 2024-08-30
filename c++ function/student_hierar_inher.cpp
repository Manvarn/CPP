//Student using hierarchical Inheritance
#include<iostream>
using namespace std;
int rollno,math,physics,chemistry,total,per;
char name[10];
class student
{
    public: 

    void getdata()
    {
        cout<<"\n enter rollno : ";
        cin>>rollno;
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
class marks:public student
{
    public: 
    void calculate()
    {
        total=math+physics+chemistry;
        per=total/3;
    }
};
class result:public student
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
    marks obj;
    result obj1;
    obj.getdata();
    obj.calculate();
    obj1.show();
}
