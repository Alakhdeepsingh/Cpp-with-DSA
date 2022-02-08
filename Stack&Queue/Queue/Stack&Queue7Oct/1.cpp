#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class stackusingarray{
    i
    
    nt *data;
    int nextindex;
    int capacity;
public:
stackusingarray(){
    data=new int[4];
    nextindex=0;
    capacity=4;
}
int size(){
    return nextindex;
}
bool isEmpty(){

return nextindex==0; 
}
void push(int element){
    if(nextindex==capacity){
    int *newdata=new int[2*capacity];
    for(int i=0; i<capacity; i++){
        newdata[i]=data[i];
    }
    capacity=capacity*2;
    delete [] data;
    data=newdata;
}
data[nextindex]=element;
nextindex++;
}
int pop(){
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return INT_MIN;
    }
    nextindex--;
    return data[nextindex];
}
int top(){
       if(isEmpty()){
        cout<<"Stack Empty"<<endl;    
        return INT_MIN;   
    }
    return data[nextindex-1];
}
};
int main()
{
    stackusingarray s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}
// 50
// 50
// 40
// 30
// 2
// 0
