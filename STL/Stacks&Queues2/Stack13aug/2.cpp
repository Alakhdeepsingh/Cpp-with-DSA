 //Inbulit sort
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
// 6
// 4 5 2 25 7 8
// 2 4 5 7 8 25
