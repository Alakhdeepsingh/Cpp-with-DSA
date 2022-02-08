#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int *p=&i;
    cout<<p<<endl;
    p=p+2;
    cout<<p<<endl;
    p=p-2;
    cout<<p<<endl;
    return 0;
}
// 0x61ff08
// 0x61ff10
// 0x61ff08