//Maximum square matrix with all zeros using dp
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        cout<<1;
        for(int i=0;i<n;i++){
            if(v[0][i]==0){
                dp[0][i]=1;
            }
            else{
                dp[0][i]=0;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i][0]==0){
                dp[i][0]=1;
            }
            else{
                dp[i][0]=0;
            }
        }
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){
                if(v[i][j]==0){
                    dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
        int ans =INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans=max(ans,dp[i][j]);
        }
    }
    cout<<ans<<endl;
    return 0;
}