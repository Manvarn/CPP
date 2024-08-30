//student using  single inheritance
#include<iostream>
using namespace std;
class student
{
    public:
    int roll_no,math,physics,chemistry,total;
    float per;
    char name[10];
    void enter()
    {
        cout<<"\n Roll.No : ";
        cin>>roll_no;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Math : ";
        cin>>math;
        cout<<"\n Physics : ";
        cin>>physics;
        cout<<"\n Chemistry : ";
        cin>>chemistry;
    }
};
class result:public student
{
    public:
    void calculate()
    {
        total=math+physics+chemistry;
        per=total/3;
    }
    void show()
    {
        cout<<"\n----------------------------------\n";
        cout<<"\n Roll_no : "<<roll_no;
        cout<<"\n Name : "<<name;
        cout<<"\n----------------------------------\n";
        cout<<"\n Math : "<<math;
        cout<<"\n Physics : "<<physics;
        cout<<"\n Chemistry : "<<chemistry;
        cout<<"\n----------------------------------\n";
        cout<<"\n Total : "<<total;
        cout<<"\n Per : "<<per;
        cout<<"\n----------------------------------\n";
    }
};
int main()
{
    result obj;
    obj.enter();
    obj.calculate();
    obj.show();
}
