//Minimum Bracket Reversal
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<int>s1;
    if(s.length() % 2==1){
        cout<<-1<<endl;
    }
    else{
            for(int i = 0; i<s.length(); i++){
        char x=s[i];
        if(x=='{'){
            s1.push(x);
        }
        else{
            if(s1.empty()){
                s1.push(x);
            }
            else{
                if(s1.top()=='{'){
                    s1.pop();
                }
                else{
                    s1.push(x);
                }
            }
        }
    }
    int ans=0;
    while(!s1.empty()){
        char x=s1.top();
        s1.pop();
        char y=s1.top();
        s1.pop();
        if(x==y){
            ans++;
        }
        else if(x=='{'&&y=='}'){
            ans=ans+2;
        }
    }
    cout<<ans<<" "; 
    }
    return 0;
}
// {{}}}}{{
// 2

// {{}}{{}{
// 1

// ())
// -1