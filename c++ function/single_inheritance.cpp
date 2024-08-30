//SINGLE INHERITANCE
#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"\n base class constructor";
    }
    ~base()
    {
        cout<<"\n base class destructor";
    }
};
class derived:public base
{
    public:
    derived()
    {
        cout<<"\n base class constructor";        
    }
    ~derived()
    {
        cout<<"\n base class desstructor";        
    }
};
int main()
{
    derived obj;
}
