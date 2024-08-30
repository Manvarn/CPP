#include<iostream>
using namespace std;
int main()
{
    int  i,j;
    for(i=1;i<=10;i=i+2)
    {
        for(j=1;j<=10;j=j+2)
        {
            cout<<"\t"<<i;
        }
        cout<<"\n";
    }
}