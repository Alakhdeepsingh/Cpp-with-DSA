//Minimum count using recursion
#include<bits/stdc++.h>
using namespace std;
int mincount(int n){
    if(n<=3){
        return n;
    }
    int ans = INT_MAX;
    for(int i=1; (i*i)<=n; i++){
        int x=i*i;
        ans=min(ans, 1 + mincount(n-x));
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<mincount(n)<<endl;
    return 0;
}

