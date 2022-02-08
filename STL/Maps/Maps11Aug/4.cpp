#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print (map<int,int>&m){
    cout<<m.size()<<endl;
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    map<int ,int>m;
    // m[1]="abc";
    // m[5]="cdc";
    // m[3]="acd";
    // m.insert({4,"afg"});
    m[6];
    print(m);
    return 0;
}
// 1
// 6 0