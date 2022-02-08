#include<iostream>
using namespace std;
int main()
{
    int i=10;
    float f=1.6;
    double d=133.567;
    cout<<&i<<endl;
    cout<<&f<<endl;
    cout<<&d<<endl;
    int *pi=&i;
    cout<<pi<<endl;
    float *qf=&f;
    cout<<qf<<endl;
    double *rd=&d;
    cout<<rd<<endl;
    cout<<*pi<<endl;
    cout<<*qf<<endl;
    cout<<*rd<<endl;
    cout<<i<<endl;
    cout<<f<<endl;
    cout<<d<<endl;
    cout<<sizeof(pi)<<endl;
    cout<<sizeof(qf)<<endl;
    cout<<sizeof(rd)<<endl;
    cout<<sizeof(i)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(f)<<endl;
    return 0;
}
// 0x61ff00
// 0x61fefc
// 0x61fef0
// 0x61ff00
// 0x61fefc
// 0x61fef0
// 10
// 1.6
// 133.567
// 10
// 1.6
// 133.567
// 4
// 4
// 4
// 4
// 8
// 4
