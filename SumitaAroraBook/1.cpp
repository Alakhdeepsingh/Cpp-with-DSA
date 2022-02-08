#include<iostream>
using namespace std;
int Execute(int &X,int Y=200)
{
int TEMP=X+Y;
X+=TEMP;
if(Y!=200)
cout<<TEMP<<X<<Y<<endl;
}
int main(){
int A=50,B=20;
Execute(B);
cout<<A<<B<<endl;
Execute(A,B);
cout<<A<<B<<endl;
return 0;
}
// 50240
// 290340240
// 340240
