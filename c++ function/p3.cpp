#include<iostream>
using namespace std;
class test1
{
    int x=10;
    public:
    void get_value() //getter
    {
        cout<<"\n x : "<<x;
    } 
    void set_value(int n) //setter
    {
        x=n;
    }
};
int main()
{
    test1 obj1;
    obj1.set_value(1);
    obj1.get_value();
}