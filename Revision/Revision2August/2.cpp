#include<iostream>
#include<stdlib.h>
using namespace std;
const int LOW=25;
void main(){
randomize();
int POINT=5,Number;
for(int I=1;I<=4;I--)
{
Number=LOW+rand(POINT);
cout<<Number<<":";
POINT--;
}
return 0;
}