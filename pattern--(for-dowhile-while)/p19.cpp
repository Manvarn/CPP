#include<iostream>
using namespace std;
int main()
{
    char  i,j,k=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++,k++)
        if(i%2==0)
        {
            cout<<"\t"<<(char)(k+32);
        }
        else
        {
            cout<<"\t"<<(char)(k);
        }
        cout<<"\n";
        
    }
}