//FRIEND FUNCTION
#include<iostream>
using namespace std;
class myclass
{
    int a,b;

    public:
    friend int sum(myclass);
    friend int sub(myclass);
    friend int mul(myclass);
    friend int div(myclass);
    void set_ab(int,int); //Function declaration
};
//return-type classname :: functionname()
//{}
void myclass::set_ab(int a,int b) //function defination
{
    this->a=a;
    this->b=b;
}
int sum(myclass x)
{
    return x.a + x.b;
}
int sub(myclass y)
{
    return y.a - y.b;
}
int mul(myclass z)
{
    return z.a * z.b;
}
int div(myclass d)
{
    return d.a / d.b;
}
int main()
{
    myclass n;
    n.set_ab(3,4);//function calling
    cout<<sum(n)<<"\n";
    cout<<sub(n)<<"\n";
    cout<<mul(n)<<"\n"; 
    cout<<div(n)<<"\n";
    return 0;
}
