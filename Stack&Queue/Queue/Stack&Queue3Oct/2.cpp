//Reverse the stack
#include<bits/stdc++.h>
using namespace std;
stack<int>s;
void insertw(int a){
    if(s.empty()==1){
        s.push(a);
    }
    else{
        int d=s.top();
        s.pop();
        insertw(a);
        s.push(d);
    }
}
void reverse(){
    if(s.empty()==1){
    return ;
    }
    int c=s.top();
    s.pop();
    reverse();
    insertw(c);
}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    reverse();
    while(!s.empty()){ 
    int a = s.top(); 
    s.pop();
    cout<<a<<" ";
    }
    return 0;
}

// 50 40 30 20 10

