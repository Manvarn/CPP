//defaul and paramterized contructor
#include<iostream>
using namespace  std; 
class test
{
    public:
    test() //default constructor
    {
        cout<<"\n------default constructor calling------";
    }
    test(int n) //paramterized constructor
    {
        cout<<"\n paramterized constructor calling....."<<n;      
    }
};
int main()
{
    test obj,obj1(10),obj2(20),obj3(30),obj4(40),obj5(50);
}