//electricity bill
//wtih argument no return
#include<iostream>
using namespace std;
int main()
{
    int no,unit;
    float total;
    void bill(int,float);
    cout<<"\n enter unit : ";
    cin>>unit;

    bill(unit,total);
}
void bill(int unit, float total)
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