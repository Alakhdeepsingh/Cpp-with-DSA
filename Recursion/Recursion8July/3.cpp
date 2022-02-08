#include<iostream>
using namespace std;
int main()
{
    string *sp=new string;
    *sp ="def";
    cout<<sp<<endl;
    cout<<*sp<<endl;
    string s="abc";
    string s1;
    s1="def";
    cout<<s1<<endl;
    cout<<s<<endl;
    return 0;
}
// 0xff1728
// def
// def
// abc

