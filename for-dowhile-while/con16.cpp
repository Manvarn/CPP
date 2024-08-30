//1,1,2,3,5,8,.....,n
#include<iostream>
using namespace std;
int main()
{
    int i,a=0,b=1,c;
    for (i=1;i<10;i++)
    {
        c=a+b;
        b=a;
        a=c;          
        cout<<"\n"<<c;
    }
}
