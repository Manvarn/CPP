// define a class student with the following specification
#include<iostream>
using namespace std;
class student
{
    private:
    int admno;
    char sname[20];
    float english,math,science;
    float total,per;
    
    
    public:
    void takedata()
    {
        cout<<"\n enter admno : ";
        cin>>admno;
        cout<<"\n enter sname : ";
        cin>>sname;
        cout<<"\n enter english : ";
        cin>>english;
        cout<<"\n enter math : ";
        cin>>math;
        cout<<"\n enter science : ";
        cin>>science;
    }
    void showdata()
    {
        cout<<"\n adm no : "<<admno;
        cout<<"\n sname : "<<sname;
        cout<<"\n english : "<<english;
        cout<<"\n math : "<<math;
        cout<<"\n science : "<<science;
    }
    void ctotal()
    {
        total=english+math+science;
        per=total/3;
        cout<<"\n\n total : "<<total;
        cout<<"\n\n per : "<<per;
       
    }
};
int main()
{
    student obj;
    obj.takedata();
    obj.showdata();
    obj.ctotal();
}