#include<iostream>
using namespace std;
class test
{
        int x=10;  //default private data//error --> 'x' is a private member of 'test'
        public:
        int y=20; //public
};
int main()
{
    test obj1;
    //cout<<obj1.c;
    cout<<"\n"<<obj1.y;
    obj1.y=300;
    cout<<"\n"<<obj1.y;
    return 0;
}