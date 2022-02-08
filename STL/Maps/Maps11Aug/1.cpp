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
    map<int,string>:: iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        cout<< (*it).first <<" "<< (*it).second <<endl;
    }
    return 0;
}
// 1 abc
// 3 acd
// 4 afg
// 5 cdc
