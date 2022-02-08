//Balanced Parenthesis
#include<iostream>
#include <stack>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char>s1;
    int n=s.length();
    for(int i=0; i<n; i++){
        if(s[i]=='{'|| s[i]=='('||s[i]=='['){
            s1.push(s[i]);
        }
    
        else if(s[i]=='}'){
            if(s1.size()==0){
                 s1.push(s[i]); 
            }
            else if(s1.top()=='{'){
                s1.pop();
            }
            else {
                s1.push(s[i]);
            }
        }
         else if(s[i]==')'){
            if(s1.size()==0){
                 s1.push(s[i]); 
            }
            else if(s1.top()=='('){
                s1.pop();
            }
            else {
                s1.push(s[i]);
            }
        }
         else if(s[i]==']'){
            if(s1.size()==0){
                 s1.push(s[i]); 
            }
            else if(s1.top()=='['){
                s1.pop();
            }
            else {
                s1.push(s[i]);
            }
        }
    }
    if(s1.empty()==1){
    cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
    return 0;
}
// {a+[b-(c*d)]+g}
// YES

// {a+[b-(c*d)]+g
// NO

