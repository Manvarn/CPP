#include<iostream>
using namespace std;
int main()
{
    int i;
    i='A';
    while(i<='Z');
    {
        cout<<"\n"<<(char)(i);
        i=i+2;
    }
}