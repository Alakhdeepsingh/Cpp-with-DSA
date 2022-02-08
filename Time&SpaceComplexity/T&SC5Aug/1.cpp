#include<iostream>
using namespace std;
int linearsearch( int a[], int n, int num){
    for(int i=0; i<n; i++){
        if(num==a[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n],num;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>num;
    int d = linearsearch(a,n,num);
    cout<<d;
    return 0;
}

