//Electricity using Single Inheritance
#include<iostream>
using namespace std;
class electricity
{
    public:
    float unit;
     
    void get()
    {
        cout<<"\n enter unit : ";
        cin>>unit;
    }
};
class bill:public electricity
{
    public:
    float total;

    void calculate()
    {
        if (unit<=100)
        {
            total=unit*0.6+50;
        }
        else if (unit>100 && unit<=300)
        {
            total=100*0.6+(unit-100)*0.8+50;
        }
        else if (unit>300)
        {
            total=100*0.6+200*0.8+(unit-300)*0.9+50;
        }
        if (unit>300)
        {
            total=total*1.15;
        }
        cout<<"\n bill : "<<total;
    }
};
int main()
{
    bill e1;
    e1.get();
    e1.calculate();
}