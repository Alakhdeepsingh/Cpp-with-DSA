#include<iostream>
using namespace std;
int increment (int a[], int b, int n){
a[0]++;
b++;
 cout<<a[0];
cout<<b;
}
int main()
{
    int a[100]={1,2,3,4,5};
    int b=10;
    increment(a,b,100);
    return 0;
}

