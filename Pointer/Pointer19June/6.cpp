#include<iostream>
using namespace std;
int main()
{
int a = 100, b = 200;
int *p = &a, *q = &b;
q = p;
cout<<p<<"  "<<q<<endl;
cout<<*p<<"   "<<*q;
    return 0;
}
// 0x61ff00  0x61ff00    p=q
// 200   200

// 0x61ff04  0x61ff04    q=p
// 100   100