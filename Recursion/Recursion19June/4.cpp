#include<iostream>
using namespace std;

int fib(int n) 
    if(n<=1)
        return n;

int n;
    int a=fib(n-1);
    int b=fib(n-2);
    return a+b;

int main()
{
    int n;
    cout<<fib(5);
    return 0;
}

