//Matrix Chain Multiplication using recursion
#include<bits/stdc++.h>
using namespace std;
int chain(vector<int>&c,int start ,int end){
    if(start==end){
        return 0;
    }
    int ans =INT_MAX;
    for(int i=start; i<end; i++){
        int y=chain(c,start,i)+chain(c,i+1,end)+(c[start-1] * c[i]*c[end]);
        ans =min(ans,y);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>c(n);
    for(int i=0; i<n; i++){
        cin>>c[i];
    }
    int d=chain(c,1,n-1);
    cout<<d<<endl;
    return 0;
}
// 4
// 5 3 4 9
// 240
