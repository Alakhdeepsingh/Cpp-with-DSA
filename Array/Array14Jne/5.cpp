#include<iostream>
using namespace std;
int main()
{
char name[100];
cin>>name;
name[4]='x';
name[1]='\0';
cout<<name;
    return 0;
}
// abcde
// a