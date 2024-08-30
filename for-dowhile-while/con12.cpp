//total 0,2,4,6,8,10=30
#include<iostream>
using namespace std;
int main()
{
    int i,total=0;
    for(i=0;i<=10;i=i+2)
    {
        total=total+i;
        cout<<"\t"<<i;
    }
    cout<<"\n total : "<<total;
} 