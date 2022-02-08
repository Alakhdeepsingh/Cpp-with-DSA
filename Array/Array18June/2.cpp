#include<iostream>
#include<cstring>
using namespace std;
void printarray(int a[][100], int m, int n) {
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
             cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
}
int main()
{
    int a[100][100];
    int m,n;
    cin>>m>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    printarray(a,m,n);
    return 0;
}
// 3 2
// 1 2 3 4 5 6
// 1  2
// 3  4
// 5  6