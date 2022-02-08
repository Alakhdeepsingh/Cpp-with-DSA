#include<iostream>
using namespace std;
int main()
{
int n,m,k;
cin>>n>>m;
int arr[n][m];
int sum1=0,sum2=0;
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin>>arr[i][j] ;
    }
}
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        if(i==j){
            sum1=sum1+arr[i][j];
        }
    }
}
cout<<sum1<<" ";
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        if(i+j==n-1){
            sum2=sum2+arr[i][j];
        }
    }
}
cout<<sum2<<endl;
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        k=sum1-sum2;
    }
}
cout<<abs(k);
return 0;
}
// 3 3
// 1 3 2
// 9 8 4
// 7 5 6
// 1 3 2
// 9 8 4
// 7 5 6
// 15 17 
// 2
