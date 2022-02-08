#include<iostream>
using namespace std;
int main()
{
    pair<int,string> p;
    p=make_pair(2,"abc");
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}
// 2 abc