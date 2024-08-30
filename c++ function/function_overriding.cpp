//Compile Time Overloading
//Run Time Polymorphism

#include<iostream>
using namespace std;
class base
{
    public:
    virtual void display()
    {
        cout<<"base class in invoked"<<endl;
    }
};
class derived:public base
{
    public:
    void display()
    {
        cout<<"derived class is invoked"<<endl;
    }
};
int main()
{
    base *p,b;
    derived d;
    p=&b;
    p->display();
    p=&d;
    p->display();

    // derived d;
    // d.display();
    // d.display1();
    // base b;
    // b.display();
}
