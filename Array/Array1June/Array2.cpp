#include<iostream>
using namespace std;
int main()
{
    int n;  //5
    int a[100]; //a[n]=100
    for(int i=0; i<100; i++){ 
        cin>>a[i];
    }
    for(int i=0; i<100; i++){
        cout<<a[i]<<endl;
    }
    return 0;
}

