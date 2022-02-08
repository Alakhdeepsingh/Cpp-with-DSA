//Linear Search
#include<iostream>
using namespace std;
int main()
{
    // int t;
    // cin>>t;
    // while(t--){

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
        else if(search!=a[i]) {
        }
        
        cout<<-1;
    return 0;
}

