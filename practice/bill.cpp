#include<iostream>
using namespace std;
int main()
{
   int rate,qty,amt,dis,billant,gst,netbill;
   cout<<"\n enter rate : ";
   cin>>rate;
   cout<<"\n enter qty : ";
   cin>>qty;

    amt=rate*qty;
    dis=amt*0.05;
    billant=amt-dis;
    gst=billant*0.18;
    netbill=billant+gst;

    cout<<"\n rate\tqty\tamt\tdis\tbillant\tgst\tnetbill";
    cout<<"\n"<<rate;
    cout<<"\t"<<qty;
    cout<<"\t"<<amt;
    cout<<"\t"<<dis;
    cout<<"\t"<<billant;
    cout<<"\t"<<gst;
    cout<<"\t"<<netbill;
}