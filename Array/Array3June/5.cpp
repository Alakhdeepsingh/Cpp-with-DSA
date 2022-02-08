#include<iostream>
using namespace std;
void printarray(int a[],int n){     
    for(int i=0; i<n; i++){ 
        cout<<a[i];
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    cout<<a<<endl;
    for(int i=0; i<n; i++){ 
        cin>>a[i];
    }
    printarray(a,n);
    return 0;
}
// 5
// 0x61fed8
// 1 2 3 4 5
// 12345
