//ofstream stream class to write on files.
//ifstream stream class to read from files.
//fstream stream class to both read and write from/to files.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream filestream("file1.txt");
    if(filestream.is_open())
    {
        filestream<<"welcome to SkillQode";
        filestream<<"\nWe Started New lab";
        filestream<<"\nWe Started New Branch";
        filestream.close();
    }
    else
        cout<<"File Opening is Fail.";
    return 0;
}
