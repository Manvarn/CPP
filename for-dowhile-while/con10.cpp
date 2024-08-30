//total 1,2,3,...,10=55
#include<iostream>
using namespace std;
int main()
{
    int i,total=0;
    for(i=1;i<=10;i++)
    {
        total=total+i;
        cout<<i;
    }
    cout<<"\n total : "<<total;
} 