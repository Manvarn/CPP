// Function Overloading
#include<iostream>
using namespace std;
class Arith
{
    int x,y;

    public:
    void doSum()
    {
        x=0,y=0;
    }
    void doSum(int x ,int y)
    {
        cout<<"int x+y : "<<x+y<<endl;
    }
    void doSum(double x ,double y)
    {
        cout<<"double x+y : "<<x+y<<endl;
    }
    double doSum(double x , double y , double z)
    {
       return (x+y+z);
    }
};
int main()
{
    Arith letsSum;
    letsSum.doSum();
    letsSum.doSum(5,8);
    letsSum.doSum(5.5,8.9);
    cout<<"double 3 para : "<<letsSum.doSum(5.5,8.9,5.25);
    return 0;
}