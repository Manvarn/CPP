//employee salary management
#include<iostream>
using namespace std;
class employee
{
    private:
    char name[10],qualification[10];
    int salary,hour,total,grosssalary,hra,da,pf,monthly_salary,tax,final_salary;
    
    public:
    void getdata()
    {
        cout<<"\n enter employee name : ";
        cin>>name;
        cout<<"\n enter employee qualification : ";
        cin>>qualification;
        cout<<"\n enter hour : ";
        cin>>hour;
        cout<<"\n enter salary : ";
        cin>>salary;
        
    }
    void calculate()
    {
        // total=hour+0.10;
        // cout<<"\n total : "<<hour+0.10;
        //1 hour = 10;
        total= hour*salary;
        monthly_salary=salary*26;
    }
    void atax()
    {
        cout<<"\n monthly_salary : "<<monthly_salary;
        if(monthly_salary<5000)
        {
            hra=monthly_salary*(0.08);
            da=monthly_salary*(0.20);
        }
        else if(monthly_salary>5000 && monthly_salary<=10000)
        {
            hra=monthly_salary*(0.12);
            da=monthly_salary*(0.30);
        }
        else if(monthly_salary>10000 && monthly_salary<=15000)
        {
            hra=monthly_salary*(0.15);
            da=monthly_salary*(0.40);
        }
        else if(monthly_salary>=15000)
        {
            hra=monthly_salary*(0.20);
            da=monthly_salary*(0.50);
        }
        grosssalary=hra+da;
        cout<<"\n grosssalary : "<<grosssalary;
        pf=grosssalary*(0.08);
        tax=200;
        final_salary=grosssalary-pf-tax;
    }
    void show()
    {
        cout<<"\n employee name : "<<name;
        cout<<"\n employee qualification : "<<qualification;
        cout<<"\n employee salary per hour : "<<salary;
        cout<<"\n employee hour work: "<<hour;
        cout<<"\n 1 day salary: "<< total;
        cout<<"\n monthly salary :"<<total*26;
        cout<<"\n grosssalary : "<<grosssalary;
        cout<<"\n pf : "<<pf;
        cout<<"\n final_salary : "<<final_salary;
    }
};
int main()
{
    employee obj;
    obj.getdata();
    obj.calculate();
    obj.atax();
    obj.show();
}
