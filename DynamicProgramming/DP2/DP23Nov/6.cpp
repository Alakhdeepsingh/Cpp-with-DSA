//Matrix Chain Multiplication using dp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>c(n);
    vector<vector<int>>dp(n,vector<int>(n,-1));
    for(int i=0; i<n; i++){
        cin>>c[i];
    }
    for(int i=1; i<n; i++){
        dp[i][i]=0;
    }
    for(int i=2; i<n; i++){
        for(int j=1; j<n-i+1; j++){
            int len=j+i-1;
            int ans =INT_MAX;
            for(int z=j; i<len; z++){
                int y=dp[j][z]+dp[z+1][len]+c[j-1]*c[z]*c[len];       
                ans=min(ans,y);
            }
            dp[j][len]=ans; 
       }
    }
    cout<<dp[1][n-1]<<endl;
    return 0;
}