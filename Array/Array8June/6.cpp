//Arrange number in array
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
    int val=1;
    for(int i=0; i<n; i++){
        if(a[i]%2!=0){
            cout<<a[i];
            val++;
        }
    }
    val = 1;
    for(int i=n-1; i>=0; i--){
        if(a[i]%2==0){
            cout<<a[i];
            val++;
        }
    }
    return 0;
}
// 5
// 1 2 3 4 5
// 13542

