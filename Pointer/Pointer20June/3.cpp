#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    int *p;
    cout<<p<<endl;
    cout<<*p<<endl;
    (*p)++;
    cout<<*p<<endl;

    return 0;
}

// 4201136
// 4201137
// 0x61ff80
// 6422492
// 6422493