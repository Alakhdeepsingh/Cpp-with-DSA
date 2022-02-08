//Minimum count using DP
#include<bits/stdc++.h>
using namespace std;
int mincount(int n,vector<int>&v){
    if(n<=3){
        return n;
    }
    if(v[n]!=-1) {
        return v[n];
    }
    int ans = INT_MAX;
    for(int i=1; (i*i)<=n; i++){
        int x=i*i;
        ans=min(ans, 1 + mincount(n-x,v));
    }
    v[n]=ans;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1,-1);
    cout<<mincount(n,v)<<endl;
    return 0;
}
// 5
// 2