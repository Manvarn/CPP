// define a class batsman with the following specification
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class batsman
{
    private:
    int bcode;
    char bname[20];
    int innings,notout,runs;
    float batavg;

    public:
    void readdata()
    {
        cout<<"\n enter bcode : ";
        cin>>bcode;
        cout<<"\n enter bname : ";
        cin>>bname;
        cout<<"\n enter innings : ";
        cin>>innings;
        cout<<"\n enter notout : ";
        cin>>notout;
        cout<<"\n enter runs : ";
        cin>>runs;
    }
    void calcavj()
    {
        batavg=runs/(innings-notout);
        cout<<"\n batavg : "<<batavg;
    }
    void displaydata()
    {
        cout<<"\nBatsman code :"<<bcode;
        cout<<"\nBatsman name: "<<bname;
        cout<<"\nInnings: "<<innings;
	    cout<<"\nNot out:"<<notout; 
        cout<<"\nRuns: "<<runs;
        cout<<"\nBatting Average: "<<batavg;
    }
};  
int main()
{
    batsman obj;
    obj.readdata();
    obj.calcavj();
    obj.displaydata();
}  	