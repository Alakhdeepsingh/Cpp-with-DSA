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
    int swap;
    for(int i=0; i<n; i++){
        swap=a[0];
        a[0]=a[n-1];
        a[n-1]=swap;
        a[0]++;
        a[n-1]--;
        cout<<a[i];
    }
    return 0;
}