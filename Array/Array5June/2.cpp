#include<iostream>
using namespace std;
void alakh(int a[], int n) { 
for(int i=0; i<n; i++){
    cout<<a[i];
}
}
int main()
{
    int a[100]={1,2,3,4,5};
    alakh(a,100);
    return 0;
}
