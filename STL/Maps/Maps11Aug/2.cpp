#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int ,string>m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
    for(auto &pr : m)
            //or
    // map<int,string>:: iterator it;
    // for(it=m.begin(); it!=m.end(); it++)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}
// 1 abc
// 3 acd
// 4 afg
// 5 cdc