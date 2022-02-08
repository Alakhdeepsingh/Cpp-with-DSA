#include<iostream>
using namespace std;
void Callme(int Arg1,int Arg2=20)
{
Arg1=Arg1+Arg2;
cout<<Arg1<<Arg2;
}
    int main(){
int One=10,Two=20;
Callme(One,Two);
Callme(Two);

   return 0;
}

