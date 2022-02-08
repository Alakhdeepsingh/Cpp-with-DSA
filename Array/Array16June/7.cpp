#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char input1[100]='abcd';
    char input2[100]='def';
    // cin>>input1;
    // cin>>input2;
    strcpy(input1 , input2);
    cout<<input1<<endl;
    cout<<input2<<endl;
    return 0;
}

