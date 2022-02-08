#include<iostream>
using namespace std;
#include<ctype.h>
void Encode(char Info[],int N);
int main(){
char Memo[]="Justnow";
Encode(Memo,2);
cout<<Memo<<endl;
}
void Encode(char Info[],int N)
{
for(int I=0;Info[I]!='\0';I++)
if(I%2==0)
Info[I]=Info[I]-N;
else if(islower(Info[I]))
Info[I]=toupper(Info[I]);
else
Info[I]=Info[I]+N;
}


