#include<iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4};
    int *p = a+1;
    cout << *p << endl;
    return 0;
}

