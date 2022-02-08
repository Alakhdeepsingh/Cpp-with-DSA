//Maximum square matrix with all zeros using memorization
#include<bits/stdc++.h>
using namespace std;
int recursion(vector<vector<int>>&v,vector<vector<int>>&a,int i,int j,vector<vector<int>>&dp){
    if(i==0||j==0){
        if(v[i][j]==0){ 
            a[i][j]=1;
            return 1;
        }
        else{
            a[i][j]=0;
            return 0;
        }
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
int x=recursion(v,a,i-1,j-1,dp);
int y=recursion(v,a,i-1,j,dp);
int z=recursion(v,a,i,j-1,dp);
if(v[i][j]==0){
a[i][j]=min(x,min(y,z))+1;
}
else{
    a[i][j]=0;
}
dp[i][j]=a[i][j];
return a[i][j];
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    vector<vector<int>>a(n,vector<int>(n));
    vector<vector<int>>dp(n,vector<int>(n,-1));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cin>>v[i][j];
        }
    }
    recursion(v,a,n-1,n-1,dp);
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans=max(ans,a[i][j]);
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
// 5
// 1 0 1 0 0
// 0 0 0 1 0
// 0 0 0 1 0
// 0 0 0 0 0
// 1 1 0 0 0

// 0 1 0 1 1 
// 1 1 1 0 1 
// 1 2 2 0 1 
// 1 2 3 1 1 
// 0 0 1 2 2 
// 3