#include<iostream>
using namespace std;
int fab(int n){
    if(n==1||n==0){
        return n;
    }
    else {
        return fab(n-1)+fab(n-2);
    }
}

int main()
{
    int n ,i=0;
    cin>>n;
    while(i<n){
        cout<<fab(i)<<"  ";
        i++;
    }
    return 0;
}
// 10
// 0  1  1  2  3  5  8  13  21  34
