#include<iostream>
using namespace std;
int main()
{
    int  i,j,k=1;
    for(i=1;i<=5;i=i+1)
    {
        for(j=1;j<=i;j++,k++)
        {
            cout<<"\t"<<k;
        }
        cout<<"\n";
    }
}