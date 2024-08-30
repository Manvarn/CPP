//Bank
#include<iostream>
using namespace std;
class bank
{  
    int n,a=0,no;
    public:
    void acc_no()
    {
        cout<<"\n enter account number : ";
        cin>>no;
    }
    void acc_type()
    {
        cout<<"\n account type : ";
        cin>>n;
    }
    void deposite()
    {
        cout<<"\n enter deposite : ";
        cin>>n;
        a=a-n;
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
            cout<<"\n no  balance ! ";
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
    int x;
    while(x!=0)
    {
        cout<<"\n 1. acc_no";
        cout<<"\n 2. account type";
        cout<<"\n 3. deposite";
        cout<<"\n 4. withdraw";
        cout<<"\n 5. balance";
        cout<<"\n your choice : ";
        cin>>x;

        switch(x)
        {
            case 1:
            obj.acc_no();
            break;
            case 2:
            obj.acc_type();
            break;
            case 3:
            obj.deposite();
            break;
            case 4:
            obj.withdraw();
            break;
            case 5:
            obj.balance();
            break;
            default:
            cout<<"\n wrong choice !";
            break;
        }
    }
}