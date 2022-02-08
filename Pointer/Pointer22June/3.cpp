#include<iostream>
using namespace std;
int print(int *arr,int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans=ans+arr[i];
    }
    return ans;
}
int main()
{
    int a[10];
    cout<<sizeof(a)<<endl;
    cout<<print(a,10)<<endl;
    return 0;
}

