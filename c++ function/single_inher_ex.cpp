//single inheritance example
#include<iostream>
using namespace std;
class account
{
    public:
    int salary;
    void set_sal(int sal)
    {
        salary=sal;
    }
    int get_sal()
    {
        return salary;
    }
};
class programmer:public account
{
    int bonus;
    public:
    void raised_bonus()
    {
        salary+=500;
    }
};
int main(void)
{
    programmer p1;
    p1.set_sal(50000);
    cout<<"salary : "<<p1.get_sal()<<endl;
    cout<<"give bonus";
    p1.raised_bonus();
    cout<<"salary : "<<p1.get_sal()<<endl;
    return 0;
}