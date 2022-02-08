//Matrix Chain Multiplication using memorization
#include<bits/stdc++.h>
using namespace std;
int chain(vector<int>&c,int start ,int end,vector<vector<int>>&dp){
    if(start==end){
        return 0;
    }
    if(dp[start][end]!=-1){
        return dp[start][end];
    }
    int ans =INT_MAX;
    for(int i=start; i<end; i++){
        int y=chain(c,start,i,dp)+chain(c,i+1,end,dp)+(c[start-1] * c[i]*c[end]);
        ans =min(ans,y);
    }
    dp[start][end] = ans;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>c(n);
    vector<vector<int>>dp(n,vector<int>(n,-1));
    for(int i=0; i<n; i++){
        cin>>c[i];
    }
    int d=chain(c,1,n-1,dp);
    cout<<d<<endl;
    return 0;
}
// 4
// 5 3 4 9
// 240