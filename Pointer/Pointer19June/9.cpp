#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int *p=&i;
    cout<<sizeof(p)<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    i++;
    cout<<i<<endl;
    cout<<*p<<endl;
    int a=i;
    a++;
    cout<<a;
    return 0;
}
// 4
// 10
// 10
// 11
// 11
// 12
