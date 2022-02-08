// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cin>>n;
// char arr[n][n];
// for(int i=1; i<=n; i++){
//         for(int j=0; j<n-i; j++){
//             arr[i][j]=" ";
//         }
// for(int k=n-i; k<n; k++){
//      arr[i][k]="#";
// }
// }
// for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//         cout<<arr[i][j];
//     }
//     cout<<endl;
// }

// return 0;
// }
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
char arr[n][n];
for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            arr[i][j]=' ';
        }
for(int k=n-i-1; k<n; k++){
     arr[i][k]='#';
}
}
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<arr[i][j];
    }
    cout<<endl;
}

return 0;
}