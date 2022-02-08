#include<iostream>
using namespace std;
int intersection(int a[], int b[],int n,int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i]==b[j]){
                cout<<a[i];
                return a[i];
            }
        }
    }
}
int main()
{
int n,m,i,j,r;
cin>>n;
int a[n];
for(int i=0; i<n; i++){
    cin>>a[i];
}
cin>>m;
int b[m];
for(int j=0; j<m; j++){
    cin>>b[j];
}
r= intersection (a,b,n,m); 
cout<<a[i];
return 0;
}

