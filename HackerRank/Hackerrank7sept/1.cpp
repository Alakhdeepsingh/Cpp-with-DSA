#include<iostream>
using namespace std;
int simpleArraySum(int ar,int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+ar[i];
    }
    return sum;
}
int main(){
    int ar={1,2,3};
    int n=3 ,sum;
    int d=simpleArraySum(ar,n);
    return 0;
}