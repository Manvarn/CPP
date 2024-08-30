//MULTILEVEL INHERITANCE
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
class base2:public base1
{
    public:
    base2()
    {
        cout<<"\n base 2 class constructor";        
    }
    ~base2()
    {
        cout<<"\n base 2 class desstructor";        
    }
};
class base3:public base2
{
    public:
    base3()
    {
        cout<<"\n base 3 class constructor";        
    }
    ~base3()
    {
        cout<<"\n base 3 class desstructor";        
    }
};
class derived:public base3
{
    public:
    derived()
    {
        cout<<"\n base class constructor......";        
    }
    ~derived()
    {
        cout<<"\n base class desstructor......";        
    }
};
int main()
{
    derived obj;
}
