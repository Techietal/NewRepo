#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream file;
    file.open("1.txt",ios::trunc | ios::in);
    string s;
    file>>s;
    cout<<s<<endl;
    file<<" pandagow";
    file>>s;
    cout<<s<<endl;
    file.close();
    return 0;
}