//Access Specifier Work In Inheritance
/*
    class base
    {
        public:
        int x;
        protected:
        int y;
        private:
        int z;
    };

    class publicDerived:public base
    {
        x is public
        y is protected
        z is no accessible from publicDerived
    };

    class protectedDerived:protected base
    {
        x is protected
        y is protected
        z is not accessible from publicDerivedd
    };

    class privateDerived:private base
    {
        x is private
        y is private
        z is not accessible from privateDerived
    };
*/

#include<iostream>
using namespace std;
class base
{
    private:
    int pvt=1;
    protected:
    int prot=2;
    private:
    int pub=3;
    int getPVT()
    {
        RETURN pvt;
    }
};
class publicDerived:public base
{
    public:
    int getprot()
    {
        return prot;
    }
    int getpublic()
    {
        return pub;
    }
};
int main()
{
    publicDerived object1;
    //cout<<"private="<<object1.getPvT()<<endl;
    cout<<"protected="<<object1.getprot()<<endl;
    cout<<"public="<<object1.getpublic()<<endl;
    cout<<"public="<<object1.pub<<endl;
    return 0;
}
