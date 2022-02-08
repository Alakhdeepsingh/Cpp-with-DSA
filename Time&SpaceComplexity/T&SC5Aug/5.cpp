#include<iostream>
using namespace std;
int main()
{
    int n,i,j,key;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
    key=arr[i];
    j=i-1;
        while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;
    }   
    arr[j+1]=key;
    }
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}
// 5
// 23 78 54 12 7
// 7 12 23 54 78

