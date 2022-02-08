//Knapsack Memorization
#include<bits/stdc++.h>
using namespace std;
int knapsack ( int *Weight,int *values,int n, int W,vector<vector<int>> &dp){
    if(n==0||W==0){
        return 0;
    }
    if(dp[n][W]!=-1) {
        return dp[n][W];
    }
if(Weight[0]>W){
    return dp[n][W] = knapsack(Weight+1,values+1,n-1,W,dp); 
}
int x= knapsack(Weight+1,values+1,n-1,W-Weight[0],dp)+values[0];
int y= knapsack(Weight+1,values+1,n-1,W,d);
dp[n][W]=max(x,y);
return dp[n][W];
}
int main()
{
    int n=5;
    int weights[]={5,1,8,9,2};
    int values[]={4,10,2,3,1};
    int W=15;
    vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
    int d=knapsack(weights,values,n,W,dp); 
    cout<<d<<endl;
    return 0;
}
// 17
