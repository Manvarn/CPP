#include<iostream>
using namespace std;
int main()
{
    char  i,j,sp=10;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
        cout<<" ";
        for(j=1;j<=i;j++)
        {
            cout<<" *";
        }
        cout<<"\n";
        sp--;
    }

    for(i=5;i>=0;i--)
    {
        for(j=1;j<=sp;j++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            cout<<" *";
        }
        cout<<"\n";
        sp++;
    }
}