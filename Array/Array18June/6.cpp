#include<iostream>
using namespace std;
void printarray(int *arr,int m,int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}
int main()
{
int n, m;
cin >> n >> m;
int arr[n][m];
for(int i = 0; i < n; i++){
   for(int j = 0; j < m; j++){
          cin >> arr[i][j];
   }
   printarray((int *)arr, m, n);
}
    return 0;
}

