//total 1,3,5,7,9=25
#include<iostream>
using namespace std;
int main()
{
    int i,total=0;
    for(i=1;i<=10;i=i+2)
    {
        total=total+i;
        cout<<"\t"<<i;
    }
    cout<<"\n total : "<<total;
} 