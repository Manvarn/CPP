#include<iostream>
using namespace std;
int main()
{
    int i,total=0;
    i=1;
    do
    {
        total=total+i;
        cout<<"\t"<<i;
        i=i+2;
    }while(i<=10);
    cout<<"\n total : "<<total;
} 