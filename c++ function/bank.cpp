//Bank
#include<iostream>
using namespace std;
class bank
{  
    int  n,a=0;
    public:
    void deposite()
    {
        cout<<"\n enter deposite number : ";
        cin>>n;
        a=n+a;
    }
    void withdraw()
    {
        cout<<"\n enter withdraw : ";
        cin>>n;
        if (n<=a)
        {
            a=a-n;
        }
        else
        {
            cout<<"\n no balance !";
        }
    }
    void balance()
    {
        cout<<"\n your balance is : "<<a;
    }
};
int main()
{
    bank obj;
    obj.deposite();
    obj.withdraw(); 
    obj.balance();
}

    