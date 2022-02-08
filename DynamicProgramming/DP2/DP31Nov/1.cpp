//Coin Tower using Memorization
#include<bits/stdc++.h>
using namespace std;
bool coin(int n,int x,int y,vector<int>&dp){
    if(n==0) {
        return false;
    }
    else if(n==1){
        return true;
    }
    else{
        if(dp[n]!=-1){
           if(dp[n]==0){
               return false;
           }        
           else{
               return true;
           }
        }
        bool ans =false;
        if(n-1>=0){
            if(!coin(n-1,x,y,dp)){
                ans=true;
            }
        }
        if(n-x>=0){
            if(!coin(n-x,x,y,dp)){
                ans=true;
            }
        }
        if(n-y>=0){
            if(!coin(n-y,x,y,dp)){
                ans=true;
            }
        }
        if(ans==true){
            dp[n]=1;
        }
        else{
            dp[n]=0;
        }
    return ans;
    }
}
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>dp(n+1,-1);
    bool c=coin(n,x,y,dp);
    cout<<c<<endl;
    return 0;
}
// 10
// 4
// 6
// 0

// 5
// 3
// 4
// 1

