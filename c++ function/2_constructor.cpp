//parameterized constructor
#include<iostream>
using namespace std;
class test
{
    public:
    test(int n) //parameterized constuctor
    {
        cout<<"\n parameterized constuctor calling..."<<n;
    }
};
int main()
{
    test obj1(10),obj2(20),obj3(30),obj4(40),obj5(50);
}