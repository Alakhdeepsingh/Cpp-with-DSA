#include<iostream>
using namespace std;
void fun1(int n) 
{
	if (n==0)
        return;
        else{
            cout<<n;
            fun1(n/2);
        }
}
void fun2(int n)
{
	if(n == 0)
		return;
	
	fun2(n-2);
	cout << n <<"(";
	fun1(--n);
    cout<<")";
}

int main () {
	fun2(10);
}
