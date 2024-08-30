#include<iostream>
using namespace std;
class test
{
    int x=154;
    public:
    int y=25;
};
int main()
{
    test obj1;
    cout<<"\n"<<obj1.y;
    obj1.y=89;
    cout<<"\n"<<obj1.y;
    return 0;
}