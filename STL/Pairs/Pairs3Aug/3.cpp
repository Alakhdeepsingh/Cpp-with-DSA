#include<iostream>
using namespace std;
int main()
{
    pair<int,string> p;
    p={5,"abc"};
    pair<int,string>p1=p;
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}

