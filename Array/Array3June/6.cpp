// linear search 
// 10 20 30 40 50 
// I have to find out 40 from the array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int num;
    for(int i=0; i<n; i++){
        if(num=a[i]){
            cout<<num<<" ";
        }
    }
    return 0;
}
// 5
// 10 20 30 40 50
// 10 20 30 40 50

