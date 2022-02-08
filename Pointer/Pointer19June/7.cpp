#include<iostream>
using namespace std;
int main()
{
    int a[3]={1,2,3};
    cout<<*(a+1)<<endl;
    cout<<&a;
    return 0;
}
// 0x61ff04
// 0th index of address

// 0x61ff04
// 0x61ff04

// 0x61ff08
// 0x61ff04

// 2
// 0x61ff04