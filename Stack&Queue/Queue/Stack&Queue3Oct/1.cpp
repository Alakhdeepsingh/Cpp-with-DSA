// //Check Redundant bracket
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int count =0;
// int flag=0;
// stack<char>s1;
// string s;
// cin>>s;
// int n;
// for(int i=0; i<n; i++){
//     if(s[i]==')'){
//         count=0;
//         while(!s1.empty() && s1.top() != '(')
//         {
//             count++;
//             s1.pop();
//             }
//             s1.pop();
//             if(count<=1){
//                 flag=1;
//                 break;
//             }
//             else{
//                 continue; 
//             }
//     }
//     else{
//         s1.push(s[i]);
//     }
// }
// if(flag==0){
//     cout<<"FALSE";
// }
// else{
//     cout<<"TRUE";
// }
//     return 0;
// }
//Check Redundant bracket
//Check Redundant bracket
#include<bits/stdc++.h>
using namespace std;
int main()
{
int count =0;
int flag=0; //flag=yehh hua hai ki nhi hua hai
stack<char>s1;
string s;
cin>>s;
int n;
n=s.length();
for(int i=0; i<n; i++){
    if(s[i]==')'){
        count=0;
        while(!s1.empty() && s1.top() != '(')
        {
            count++;
            s1.pop();
        }
            s1.pop();
            if(count<=1){
                flag=1; //nhi hua hai
                break;
            }
            else{
                continue; 
            }
    }
    else{
        s1.push(s[i]);
    }
}
if(flag==0){ //hogya hai
    cout<<"False"<<endl;
}
else{
    cout<<"True"<<endl;
}
return 0;
}
// ((a+b))
// True
// (a+b)
// False