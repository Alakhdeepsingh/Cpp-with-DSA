#include<iostream>
using namespace std;
int multiplyRec(int m, int n ){
    if(n==1){
        return m;
    }
        return m + multiplyRec(m,n-1);
}
int main()
{
    int n,m;
    cin>>n>>m;
    int d= multiplyRec(m,n);
    cout<<d;
    return 0;
}
//5 5
//25
