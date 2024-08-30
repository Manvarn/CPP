#include<iostream>
using namespace std;
int main()
{
    float income,tax;
    cout<<"\n enter  income : ";
    cin>>income;

    if (income>=0 && income<=2500)
    {
        tax=income*0;
    }
    else if (income>=2500 && income<=5000)
    {
        tax=(income-2500)*0.10;
    }
    else if (income>=5000 && income<=10000)
    {
        tax=2500*0.10+(income-5000)*0.20;
    }
    else if (income>=10000)
    {
        tax=2500*0.10+5000*0.20+(income-10000)*0.30;
    }
    cout<<"\n total income : "<<tax;
}