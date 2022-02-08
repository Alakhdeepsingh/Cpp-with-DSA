#include<iostream>
using namespace std;
//a=base , b=powerRaised
int m(int a , int b){
    if(b=!0)
        return (a*m(a,b-1));
    
        else 
    return 1;
        
}
int main()
{
    int a,b;
    cin>>a>>b;
    int c= m(a,b);
    cout<<a<<b<<c;
    return 0;
}

