//MULTIPLE INHERITANCE
#include<iostream>
using namespace std;
class base1
{
    public:
    base1()
    {
        cout<<"\n base 1 class constructor";
    }
    ~base1()
    {
        cout<<"\n base 1 class destructor";
    }
};
class base2
{
    public:
    base2()
    {
        cout<<"\n base 2 class constructor";
    }
    ~base2()
    {
        cout<<"\n base 2 class destructor";
    }
};
class derived:public base1,base2
{
    public:
    derived()
    {
        cout<<"\n base class constructor";        
    }
    ~derived()
    {
        cout<<"\n base class destructor";        
    }
};
int main()
{
    derived obj;
}
