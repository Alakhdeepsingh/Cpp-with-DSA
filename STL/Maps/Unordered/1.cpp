#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string>&m){
    cout<<m.size()<<endl;
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    unordered_map<int ,string>m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m[6]="a";
    m[5]="cde";
    print(m);
    return 0;
} 
// 4
// 3 acd
// 6 a
// 1 abc
// 5 cde
