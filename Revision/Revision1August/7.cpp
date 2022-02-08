#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int num=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>num){
            num=a[i];
                cout<<num;
        }
    }
    }
    return 0;
}

 