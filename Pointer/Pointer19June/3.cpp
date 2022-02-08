#include<iostream>
using namespace std;
int main()
{
    int i=10;
    cout<<i<<endl;
    cout<<&i<<endl;
    int *p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;
    return 0;
}
// 10
// 0x61ff08
// 0x61ff08
// 10

