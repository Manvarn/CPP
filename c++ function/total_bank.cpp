//total bank
#include<iostream>
using namespace std;
class bank
{   
    int accountno,balance=0,amount;

    public:
    static int a,b,c;
    void data()
    {
        cout<<"\n account number : ";
        cin>>accountno;
    }  
    void deposit()
    {
        cout<<"\n deposit : ";
        cin>>amount;
        balance=balance+amount;
        a++;
    }
    void withdraw()
    {
        cout<<"\n withdraw : ";
        cin>>amount;
        if(amount<=balance)
        {
            balance=balance-amount;
        }
        else
        {
            cout<<"\n no balance";
        }
        b++;
    }
    void show()
    {
        cout<<"\n account balance : "<<balance;
    }
    static int geta()
    {
        return a;
    }
    static int getb()
    {
        return b;
    }
    static int gettotal()
    {
        return c=a+b;
    }
};
int bank::a;
int bank::b;
int bank::c;
int main()
{
    bank obj;
    int d;
    while(d!=0)
    {
        cout<<"\n 1.account no";
        cout<<"\n 2.deposit";
        cout<<"\n 3.withdraw";
        cout<<"\n 4.balance";
        cout<<"\n 5.total";
        cout<<"\n your choice : s";
        cin>>d;
        switch(d)
        {
            case 1:
                obj.data();
                break;
            case 2:
                obj.deposit();
                break;
            case 3:
                obj.withdraw();
                break;
            case 4:
                obj.show();
                break;
            case 5:
                cout<<"\n deposit transaction : "<<bank::geta();
                cout<<"\n withdraw transaction : "<<bank::getb();
                cout<<"\n total transaction : "<<bank::gettotal();
                break;

        }
    }
}