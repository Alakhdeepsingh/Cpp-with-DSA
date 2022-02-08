//Knapsack DP
#include<bits/stdc++.h>
using namespace std;
int knapsack ( int *weight,int *values,int n, int W){
    vector<vector<int>>dp(n+1,vector<int>(W+1));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W; j++){
            if(i==0||j==0){
                dp[i][j] = 0;
            }
            else if(weight[i-1]<=j){
                dp[i][j] =max (values[i-1]+dp[i-1][j-weight[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][W];
}
int main()
{
    int n=5;
    int weights[]={5,1,8,9,2};
    int values[]={4,10,2,3,1};
    int W=15;
    // cin>>n;
    // vector<int>weights(n);
    // for(int i=0;i<n;i++){
    //     cin>>weights[i];
    // }
    // vector<int>values(n);
    // for(int i=0;i<n;i++){
    //     cin>>values[i];
    // }
    // int W;
    // cin>>W;
    //vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
    int d=knapsack(weights,values,n,W); 
    cout<<d<<endl;
    return 0;
}
// 17