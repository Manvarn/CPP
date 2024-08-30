// Constructor Overloading Using Friend Function
#include<iostream>
using namespace std;
class loc
{
    int longitude,latitude;

    public:
    loc(){}
    loc(int lg, int  lt)
    {
        longitude=lg;
        latitude=lt;
    }
    void show();
    friend loc operator+(loc,loc);
    friend loc operator-(loc,loc);
    friend loc operator*(loc,loc);
    friend loc operator/(loc,loc);
};     
void loc::show()
{
    cout<<"\n longitude : "<<longitude<<"";
    cout<<"\n latitude : "<<latitude<<"\n";
}
loc operator+(loc op1,loc op2)
{
    loc temp;
    temp.longitude=op1.longitude+op2.longitude;
    temp.latitude=op1.latitude+op2.latitude;
    return temp;
}
loc operator-(loc op1,loc op2)
{
    loc temp;
    temp.longitude=op1.longitude-op2.longitude;
    temp.latitude=op1.latitude-op2.latitude;
    return temp;
}
loc operator*(loc op1,loc op2)
{
    loc temp;
    temp.longitude=op1.longitude*op2.longitude;
    temp.latitude=op1.latitude*op2.latitude;
    return temp;
}
loc operator/(loc op1,loc op2)
{
    loc temp;
    temp.longitude=op1.longitude/op2.longitude;
    temp.latitude=op1.latitude/op2.latitude;
    return temp;
}
int main()
{
    loc ob1(10,20),ob2(30,40),ob3,ob4,ob5,ob6;
    ob1.show();
    ob2.show();
    ob3=ob1+ob2;
    ob4=ob1-ob2;
    ob5=ob1*ob2;
    ob6=ob1/ob2;
    ob3.show();
    ob4.show();
    ob5.show();
    ob6.show();
    return 0;
}

