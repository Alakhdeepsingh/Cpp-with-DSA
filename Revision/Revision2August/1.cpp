#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
char Line[]="Good@LOGIC";
for(int I=0;Line[I]!='\0';I++)
{
if(!isalpha(Line[I]))
Line[I]='$';
else if(islower(Line[I]))
Line[I]=Line[I]+1;
else
Line[I]=Line[I+1];
}
cout<<Line;
return 0;
}
// oppe$OGIC