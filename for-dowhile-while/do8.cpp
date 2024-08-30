#include<iostream>
using namespace std;
int main()
{
    int i,a=1;
    i=1;
    do
    {
        cout<<"\n"<<i*a;
        i=i*2;
        a++;
        
    }while(i<=100);
}