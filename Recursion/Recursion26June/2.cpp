#include <iostream>
using namespace std;
#define N 100
 
void print(int n)
{
    if (n <= 0) {
        return;
    }
 
    print(n - 1);
    cout << n << " ";
}
 
int main()
{
    print(N);
    return 0;
}
