#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int val;
    cin>>val;
    for(int i=0; i<(((n-1)/2)+1); i++){
        val=val+2;
        cout<<i;
    }
    for(int i=0; i<n; i++){
        
    }
    return 0;
}

