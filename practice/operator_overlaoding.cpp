//OPERATOR OVERLOADING
#include<iostream>
using namespace std;
class loc
{
    int longitude,latitude;

    public:
    loc(){}
    loc(int lg, int lt)
    {
        longitude=lg;
        latitude=lt;
    }
    void show()
    {
        cout<<"\n longitude : "<<longitude<<"";
        cout<<"\n latitude : "<<latitude<<"";
    }
    loc operator+(loc);
    loc operator-(loc);
    loc operator*(loc);
    loc operator/(loc);
};
loc loc :: operator+(loc op2)
{
    loc temp;
    temp.longitude=longitude+op2.longitude;
    temp.latitude=latitude+op2.latitude;
    return temp;
}
loc loc :: operator-(loc op2)
{
    loc temp;
    temp.longitude=longitude-op2.longitude;
    temp.latitude=latitude-op2.latitude;
    return temp;
}
loc loc :: operator*(loc op2)
{
    loc temp;
    temp.longitude=longitude*op2.longitude;
    temp.latitude=latitude*op2.latitude;
    return temp;
}
loc loc :: operator/(loc op2)
{
    loc temp;
    temp.longitude=longitude/op2.longitude;
    temp.latitude=latitude/op2.latitude;
    return temp;
}
int main()
{
    loc obj1(10,20), obj2(5,30),obj3,obj4,obj5,obj6;
    obj1.show();
    obj2.show();
    obj3=obj1+obj2;
    obj4=obj1-obj2;
    obj5=obj1*obj2;
    obj6=obj1/obj2;
    obj3.show();
    ob4.show();
    obj5.show();
    obj6.show();
    return 0 ;
}

//subtraction
