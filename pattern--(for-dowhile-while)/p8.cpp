#include<iostream>
using namespace std;
int main()
{
    char  i,j,k=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++,k++)
        {
            cout<<"\t"<<k;
        }
        cout<<"\n";
    }
}