#include<iostream>
using namespace std;
int main()
{
    pair<int,string> p;
    p={5,"abccd"};
    pair<int,string> &p1=p;
    p1.first=3;
    //p.first=4; //4 abccd
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}
//3 abccd