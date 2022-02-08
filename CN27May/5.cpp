#include<iostream>
using namespace std;
bool isprime(int n){
    int i=2;
    for(; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
return true;
}
int main()
{
    int n;
    cin>>n;
    for(int x=2; x<=n; x++){
        if(isprime(x)){
            cout<<x<<endl;
        }
    }
    return 0;
}

