#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int &j=i;
    i++;
    cout<<j<<endl;
    j++;
    cout<<i;
    return 0;
}
 