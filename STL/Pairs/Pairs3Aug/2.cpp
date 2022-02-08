#include<iostream>
using namespace std;
int main()
{
    pair<int,string>p;   
    // p=make_pair(5,"abc");
           //or
    p={5,"abc"};
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}
// 5 abc
