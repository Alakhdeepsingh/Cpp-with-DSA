#include<iostream>
using namespace std;
void SwitchOver(int A[],int N,int split)
{
for(int K=0;K<N;K++)
if(K<split)
A[K]+=K;
else
A[K]*=K;
}
void Display(int A[],int N)
{ for(int K=0;K<N;K++)
(K%2==0)?cout<<A[K]
<<"%":cout<<A[K]<<endl;
}
int main(){
int H[]={30,40,50,20,10,5};
SwitchOver(H,6,3);
Display(H,6);
return 0;
}