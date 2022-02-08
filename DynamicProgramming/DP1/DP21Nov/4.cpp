//No. of Balanced Binary Tree using dynamic Programming
#include<bits/stdc++.h>
#define mod 10e9+7
using namespace std;
int balancedBTs(int h){
    vector<int>dp(h+1,-1);
    dp[0]=1;
    dp[1]=1;
    for(int i=2; i<=h; i++){
        
        int x=(dp[i-1]%mod*dp[i-1]%mod)%mod;
        int y= (2*(dp[i-1]%mod*dp[i-2]%mod)%mod)%mod;
        dp[i]=(x+y)%mod;
    }
    return dp[h];
}
int main()
{
    int h;
    cin>>h;
    cout<<balancedBTs(h)<<endl;
    return 0;
}