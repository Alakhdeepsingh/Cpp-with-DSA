#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   char input1[100] ,input2[100];
   cin>>input1;
   cin>>input2;
   if(strcmp(input1,input2)==0){
       cout<<"true"<<endl;
   }
   else{
       cout<<"false"<<endl;
   }
    return 0;
}
// alakh
// alakh
// true

// alakhd
// alakh
// false

// abcde
// acbde
// false