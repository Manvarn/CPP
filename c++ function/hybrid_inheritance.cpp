//HYBRID INHERITANCE
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
class baseB:public baseA
{
    public:
    baseB()
    {
        cout<<"\n base B class constructor";        
    }
    ~baseB()
    {
        cout<<"\n base B class desstructor";        
    }
};
class baseC:public baseB
{
    public:
    baseC()
    {
        cout<<"\n base C class constructor";        
    }
    ~baseC()
    {
        cout<<"\n base C class desstructor";        
    }
};
class derived:public baseC
{
    public:
    derived()
    {
        cout<<"\n base class constructor...";        
    }
    ~derived()
    {
        cout<<"\n base class desstructor...";        
    }
};
int main()
{
    derived obj;
}
