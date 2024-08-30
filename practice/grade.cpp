#include<iostream>
using namespace std;
int main()
{
    int math,chemistry,physics,total,per;
    cout<<"\n enter math : ";
    cin>>math;
    cout<<"\n enter chemistry : ";
    cin>>chemistry;
    cout<<"\n enter physics : ";
    cin>>physics;

    total=math+physics+chemistry;
    per=total/3;
    cout<<"\n math+physics+chemistry : "<<total;
    cout<<"\n total/3 : "<<per;

    if (per>75)
    {
        cout<<"\n grade : a";
    }
    else if (per>60 && per<75)
    {
        cout<<"\n grade : b";
    }
    else if (per>45 && per<60)
    {
       cout<<"\n grade : c"; 
    }
    else if (per>35 && per<45)
    {
       cout<<"\n grade : d"; 
    }
    else    
    {
        cout<<"\n grade : fail";
    }
}