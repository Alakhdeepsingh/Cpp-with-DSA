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
    m[6]="a";
    m[5]="cde";
    auto it =m.find(8);
    if (it==m.end()){
        cout<<"NO VALUE";
    }
    else{
        cout<<it->first<<" "<<it->second<<endl;
    }
    print(m);
    return 0;
}    
// NO VALUE4
// 1 abc
// 3 acd
// 5 cde
// 6 a