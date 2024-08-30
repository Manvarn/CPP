//object as agrument--object as return
/*
    a   b
e1  10  20
e2  20  30
add
e   30  50 = e3

e2  30  50
*/
#include<iostream>
using namespace std;
class example
{
    public:
    int a,b;
    example(){}
    example(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    example add(example e1, example e2)
    {
        example e;

        e.a = e1.a + e2.a;
        e.b = e1.b + e2.b;
        return e;
    }
    void print()
    {
        cout<<"\n a : "<<a;
        cout<<"\t b : "<<b; 
    }
};
int main()
{
    example e1(10,20) , e2(20,30) , e3;

    cout<<"\n\n Initial values for object e1\n";
    e1.print();
    cout<<"\n\n Initial values for object e2\n";
    e2.print();

    e3 = e3.add(e1,e2);

    cout<<"\n\n Initial values for object e3\n";
    e3.print();

    return 0;
}