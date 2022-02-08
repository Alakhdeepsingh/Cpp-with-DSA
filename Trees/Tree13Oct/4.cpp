//Print Subarray
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
    
    for(int k=0; k<n; k++){
        for(int j=k; j<n; j++){
            for(int i=k; i<=j; i++){
                cout<<a[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
// 3
// 1 2 3
// 1
// 12
// 123
// 2
// 23
// 3

