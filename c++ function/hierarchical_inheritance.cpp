//HIERARCHICAL INHERITANCE
#include<iostream>
using namespace std;
class baseA
{
    public:
    baseA()
    {
        cout<<"\n base A class constructor";
    }
    ~baseA()
    {
        cout<<"\n base A class destructor";
    }
};
class derived1:public baseA
{
    public:
    derived1()
    {
        cout<<"\n derived1 class constructor...";        
    }
    ~derived1()
    {
        cout<<"\n derived1class desstructor...";        
    }
};
class derived2:public baseA
{
    public:
    derived2()
    {
        cout<<"\n derived2 class constructor...";        
    }
    ~derived2()
    {
        cout<<"\n derived2 class desstructor...";        
    }
};
int main()
{
    derived1 obj;
    derived2 obj1;
}
