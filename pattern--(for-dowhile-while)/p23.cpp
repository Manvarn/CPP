#include<iostream>
using namespace std;
int main()
{
    char  i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
            cout<<"\t"<<(char)(j+64);
        }
        cout<<"\n";
    }
}