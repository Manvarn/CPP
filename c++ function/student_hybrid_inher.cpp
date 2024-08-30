//Student using Hybrid Inheritance
#include<iostream>
using namespace std;
int maths,phy,che,total,per;
class student
{
    public:
    char name[10];
    void enter()
    {
        cout<<"\n ENTER NAME :";
        cin>>name;
    }
};
class get : public student
{
    public:
    void data()
    {
        cout<<"\n MATHS :";
        cin>>maths;
        cout<<"\n PHY :";
        cin>>phy;
        cout<<"\n CHE :";
        cin>>che;
    }
};
class cal
{
    public:
    void calculate()
    {
        total=maths+phy+che;
        per=total/3;
    }
};
class result : public get,public cal
{
    public:
    void show()
    {
        cout<<"\n-----------------------------";
        cout<<"\n NAME "<<name;
        cout<<"\n-----------------------------";
        cout<<"\n MATHS "<<maths;
        cout<<"\n PHY  "<<phy;
        cout<<"\n CHE "<<che;
        cout<<"\n-----------------------------";
        cout<<"\n TOTAL "<<total;
        cout<<"\n PER "<<per;
        cout<<"\n-----------------------------";
    }
};
int main()
{
    result obj;
    obj.enter();
    obj.data();
    obj.calculate();
    obj.show();
}
