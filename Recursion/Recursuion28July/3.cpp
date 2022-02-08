#include<iostream>
using namespace std;
void SumSubset(int i,int a[],int vis[],int n, int k){
    if(i==n){
        for(int j=0; j<n; j++){
            if (vis[j]==1){
                for(int j=0; j<n; j++){
                    int sum = 0;
                    sum=sum+a[j];
                    if(sum==k)
                    cout<<sum;
                }
            }
        }
    }
	vis[i] = 1;
	SumSubset(i+1, a, vis, n);
	vis[i] = 0;
	SumSubset(i+1, a, vis, n);
}
int main() {
	int n,k;
	cin >> n;
    cin>>k;
	int ar[n];
	for(int i=0; i<n; i++) {
           cin >> ar[i];
	}
	int vis[n];
	for(int i=0; i<n; i++) {
		vis[i]=0;
    }
	SumSubset(0, ar, vis, n,k);
    return 0;
}