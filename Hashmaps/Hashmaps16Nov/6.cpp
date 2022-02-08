#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> ourmap;
    ourmap["abc"]=1;
    ourmap["abc1"]=2;
    ourmap["abc2"]=3;
    ourmap["abc3"]=4;
    ourmap["abc4"]=5;
    ourmap["abc5"]=6;

    unordered_map<string,int>::iterator it=ourmap.begin();
    while(it!=ourmap.end()){
        cout<<"key"<<" "<<it->first<<" "<<"value"<<" "<<it->second<<endl;
        it++;
    }
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // for(int i=0; i<n; i++){
    //     cout<<v[i]<<endl;
    // }
    vector<int>::iterator it1=v.begin();
    while(it1 != v.end()){
        cout<<*it1<<endl;
        it1++;
    }
    return 0;
}
// key abc5 value 6
// key abc1 value 2
// key abc value 1
// key abc2 value 3
// key abc4 value 5
// key abc3 value 4
// 5
// 1 2 3 4 5
// 1
// 2
// 3
// 4
// 5