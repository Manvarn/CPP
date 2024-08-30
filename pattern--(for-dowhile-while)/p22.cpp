#include<iostream>
using namespace std;
int main()
{
    char  i,j,k=65;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++,k++)
        {
            cout<<"\t"<<(char)(k);
        }
        cout<<"\n";
    }
}