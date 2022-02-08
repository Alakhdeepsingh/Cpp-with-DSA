#include<iostream>
using namespace std;
void function(int a[]){
    cout<<sizeof(a)<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<sizeof(a)<<endl;
    function(a);
    return 0;
}
// 5
// 1 2 3 4 5
// 20
// 4
