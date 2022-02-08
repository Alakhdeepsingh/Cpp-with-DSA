#include<iostream>
using namespace std;
int main()
{
int n,m,i,j;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
cin>>m;
int b[m];
for(j=0;j<m;j++){
    cin>>b[j];
}
for(int i=0; i<n; i++){
    for (int j=0; j<m; j++){
        if(a[i]==b[j]){
            cout<<a[i];
        }
        //cout<<a[i]<<"  "<<b[i]<<endl;
    }
}
//cout<<a[i]<<"  "<<b[i]<<endl;
    return 0;
}

