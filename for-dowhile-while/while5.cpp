#include<iostream>
using namespace std;
int main()
{
    int i,total=0;
    i=1;
    while(i<=10)
    {
        total=total+i;
        cout<<i;
        i++;
    }
    cout<<"\n total : "<<total;
} 