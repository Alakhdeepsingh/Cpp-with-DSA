#include<iostream>
using namespace std;
void printarray(int a[][5],int m,int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
}
int main()
{
    int m,n,a;
    cin>>m>>n;
    int a[][5];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
printarray(a,m,n);
    return 0;
}