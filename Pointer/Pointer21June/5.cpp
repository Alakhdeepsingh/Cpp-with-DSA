#include<iostream>
using namespace std;
int main()
{
    int a[10];
    cout<<a<<endl;
    cout<<&a[0]<<endl;
    a[0]=5;
    a[1]=10;
    cout<<*a<<endl;
    cout<<*(a+1)<<endl;
    int *p=&a[0];
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<&a<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(a)<<endl;
    p=p+1;
    a=a+1; // or a++;
    return 0;
}
// 5.cpp:20:9: error: incompatible types in assignment of 'int*' to 'int [10]'
//    20 |     a=a+1;
//       |         ^

// Error will come because we cannot assign a again