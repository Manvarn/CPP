// Constructor Overloading
#include<iostream>
using namespace std;
class sum
{
    int x,y;

    public:
    sum()
    {
        x=0,y=0;
    }
    sum(int x ,int y)
    {
        cout<<"int x+y : "<<x+y<<endl;
    }
    sum(double x ,double y)
    {
        cout<<"double x+y : "<<x+y<<endl;
    }
    sum(double x , double y , double z)
    {
        cout<<"double x+y+z :"<<x+y+z;
    }
};
int main()
{
    sum do1(10,20),do2(10.5,20.6),do3(10.5,20.6,23.6),do4;
    return 0;
}

 
 