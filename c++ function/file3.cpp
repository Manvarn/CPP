#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char input[75];
    ofstream os;

    os.open("file3.txt");
    cout<<"Writing to a textfile : "<<endl;
    cout<<"Please Enter Your Name : ";
    cin.getline(input,100);
    os<<input<<endl;
    cout<<"Please Enter Your Contacts : ";
    cin>>input;
    cin.ignore();
    os<<input<<endl;
    os.close();
    ifstream is;
    string line;
    is.open("file3.txt");
    cout<<"Reading from a text file : "<<endl;
    while(getline(is, line))
    {
        cout<<line<<endl;
    }
    is.close();
    return 0;
}
