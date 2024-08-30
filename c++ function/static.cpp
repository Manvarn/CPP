// static
//this refer o current object
#include<iostream>
using namespace std;
class bank
{
    int acc_no,balance;
    string my_name;
    public:
    static int count;
    bank(int acc_no, int balance, string my_name)
    {
        this->acc_no = acc_no;
        this->balance = balance;
      
        this->my_name = my_name;
        count++;
    }
    void getdata()
    {
        cout<<"\n"<<my_name<<" - "<<acc_no<<" - "<<balance;
        // count++;
    }
};
int bank::count;
int main()
{
    bank a(101,1500,"nik"),m(102,1700,"nikhil");
    a.getdata();
    m.getdata();

    cout<<"\nno. of accounts : "<<bank::count;
    return 0;
}
