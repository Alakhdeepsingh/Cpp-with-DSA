//Linear Search
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
    int search;
    cin>>search;
    for(int i=0; i<n; i++){
        if(search==a[i]){
            cout<<i<<endl;
        }
    }
    return 0;
}
// 5
// 10 39 87 54 60
// 54
// 3
