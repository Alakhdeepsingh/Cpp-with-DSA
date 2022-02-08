//Stock Span
#include<iostream>
#include <stack>
using namespace std;
int main(){
int count = 0;
int n;
cin>>n;
int a[n]; //prices
for(int i=0; i<n; i++){
    cin>>a[i];
}
int ans[n]; //span
ans[0]=1;
stack<int>s;
s.push(0);
for(int i=1; i<n; i++){
    while((s.empty()==false)&&a[s.top()]<=a[i]){
        s.pop();

    }
    s.push(i);
    if(s.empty()==true){
        ans[i]=i+1;
    }
    else{
        ans[i]=i-s.top();
        
    } 
}
for(int i=0; i<n; i++){
cout<<ans[i]<<" ";
} 
return 0;
}




// #include<iostream>
// using namespace std;
// class stack{
// int *data;
// int nextindex;
// int capacity;
// stack(int element){
//     data=new int[totalsize];
//     nextindex=0;
//     capacity=size;
// }
// int isEmpty(){
//     return size == 0;
// }
// void push(){
//     if(nextindex==capacity){
//         cout<<"STACK FULL";
//     }
//     data[nextindex]=elements;
//     nextindex++;    
// }
// int pop(){
//     if(isEmpty()){
//         cout<<"Stack is empty"<<endl;
//         return INT_MAX;
//     }
//     nextindex--;
//     return data[nextindex];
// }
// int top(){
//     return data[nextindex-1];
// }
// int main()
// {
//     stack(5);
//     return 0;
// }

