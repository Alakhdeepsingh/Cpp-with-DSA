#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int *p=&i;
    cout<<sizeof(p)<<endl;
    return 0;
}
// 4
//our pointer p is taking this much of memory

