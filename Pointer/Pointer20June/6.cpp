#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int *p=&i;
    cout<<p<<endl;
    p=p+1;
    cout<<p<<endl;
    return 0;
}
// 0x61ff08
// 0x61ff0c
