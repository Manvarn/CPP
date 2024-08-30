#include<iostream>
using namespace std;
int main()
{
    int i,a=0,b=1,c;
    i=1;
    do
    {
        c=a+b;
        b=a;
        a=c;          
        cout<<"\n"<<c;
        i++;
    }while(i<10);
}