#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char input1[100]="abcd";
    char input2[100]="xy";
    strncpy(input1,input2,4);
    cout<<input1<<endl;
    cout<<input2<<endl;
    return 0;
}
// xy
// xy
