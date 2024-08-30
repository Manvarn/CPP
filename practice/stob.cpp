#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"\n enter ch : ";
    cin>>ch;

    if (ch>=65 && ch<=90)
    {
        ch=ch+32;
        cout<<"\n ch : "<<ch;
    }
    else if(ch>=97 && ch<=122)
    {
        ch=ch-32;
        cout<<"\n ch : "<<ch;
    }
    
    
}