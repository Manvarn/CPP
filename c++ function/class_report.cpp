//define a class REPORT with the following specification
#include<iostream>
using namespace std;
class report
{
    private:
    int adno;
    char name[20];
    float marks[5];
    char average;
    
    public:
    void readinginfo()
    {
        cout<<"\n adno : ";
        cin>>adno;
        cout<<"\n name : ";
        cin>>name;
        cout<<"\n marks : ";
        cin>>marks[5];
    }
    void getavg()
    {
        average=(marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
        for(int i=0;i<2;i++)
	    {
		    cout<<"Subject "<<i+1<<":";
		    cin>>marks[i];
	    }
	    getavg();
    }
    void displayinfo()
    {
        cout<<"Admission number:"<<adno; 
        cout<<" Name:"<<name;
        cout<<" Marks are:"<< marks[0]<<" "<< marks[1]<<" "<<marks[2]<<" "<< marks[3]<<" "<< marks[4];
        cout<<" Average:"<<average;
    }
};
int main()
{
    report obj;
    obj.readinginfo();
    obj.getavg();
    obj.displayinfo();
}