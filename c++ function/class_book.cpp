// define a class book with the following specifiaction
#include<iostream>
using namespace std;
class book
{
    private:
    int book_no,n,total;
    char book_title[100];
    float price;

    public:
    void input()
    {
        cout<<"\n book_no : ";
        cin>>book_no;
        cout<<"\n book_title : ";
        cin>>book_title;
        cout<<"\n price : ";
        cin>>price;
    }
    void purchase()
    {
        cout<<"\n n : ";
        cin>>n;
        total=price*n;
        cout<<"\n total : "<<total;
    }
};
int main()
{
    book  obj;
    obj.input();
    obj.purchase();
}