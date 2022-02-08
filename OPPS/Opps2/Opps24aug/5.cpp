#include<iostream>
using namespace std;
int main()
{
    int i=5;
    int &j=i;
    cout<<i<<"   "<<j;
    cout<<&i<<"   "<<&j;
    return 0;
}
// 5   5    0x61ff08   0x61ff08
