#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print (map<int,string>&m){
    cout<<m.size()<<endl;
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    map<int ,string>m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
    print(m);
    return 0;
}
// 4
// 1 abc
// 3 acd
// 4 afg
// 5 cdc