#include<iostream>
using namespace std;
int search(int a[], int n, int x){
    for(int i=0; i<n; i++){
        if(a[i]==x)
        return i;
    }
    return -1;
}
int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int result=search(a,n,x)
    return 0;
}

