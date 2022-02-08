#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }    
        for(int i=0; i<m; i++){
            int sum=0;
            for(int j=0; j<n; j++){
                sum=sum+a[j][i];
                cout<<sum<<"  ";
            }
            cout<<endl;
        }
    return 0;
}

