#include<iostream>
using namespace std;
void amITheKValue( int ar[], int i, int k, int m ) {
    if( i == m ) {
        return;
    }

    if( ar[i] == k ) {
        cout << i << " " ;
    }
    i++;
    amITheKValue(ar,i,k,m);

}
int main() {
    int n,k;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    cin >> k;
    int i=0;
    amITheKValue(a,i,k,n);
    return 0;
}

