//No. of Balanced Binary Tree using memorization
#include<bits/stdc++.h>
using namespace std;
int balancedBTs(int h,vector<int>&v){
    if(h<=1){
        return 1;
    }
    if(v[h]!=-1){
        return v[h];
    }
    int mod = (int) (pow(10,9))+7;
    
    int x=balancedBTs(h-1,v);
    int y= balancedBTs(h-2,v);
    
    int temp1=(int)(((long)(x)*x)%mod);
    int temp2=(int)((2*(long)(x)*y)%mod);
    int ans =(temp1+temp2)%mod;
    
    v[h]=ans;    
    return ans;
}
int main()
{
    int h;
    cin>>h;
    vector<int>v(h+1,-1);
    cout<<balancedBTs(h,v)<<endl;
    return 0;
}
// 2
// 3

// 3
// 15

// 25
// 0

// 24
// 536870912

// 26
// 0

// 45
// 0