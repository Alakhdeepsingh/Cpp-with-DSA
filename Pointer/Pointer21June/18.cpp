#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3};
    char b[]="abc";
    cout<<a<<endl;
    cout<<b<<endl;
    char *c= &b[0];
    cout<<c<<endl;
    char c1='a';
    char *pc=&c1;
    cout<<c1<<endl;
    cout<<pc<<endl;
    return 0;
}