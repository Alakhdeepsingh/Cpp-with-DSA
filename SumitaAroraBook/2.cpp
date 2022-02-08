#include<iostream>
using namespace std;
int main()
{
int i=2;
start:
cout<<i;
i+=2;
if(i<51) 
goto start;
cout<<"\nThank You";
    return 0;
}

