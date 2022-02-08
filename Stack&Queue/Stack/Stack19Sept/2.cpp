//Stack using array
#include<iostream>
#include <climits>
using namespace std;
class stackusingarray{
    int *data;
    int i;
    int capacity;
    public:
    stackusingarray(int totalsize){
    data=new int[totalsize];
    i=0;
    capacity=totalsize;
}
int size(){
    return i;
}
bool isEmpty(){
    if(i==0){
        return true;
    }
    else{
        return false;
    }
}
void push(int element){
    if(i==capacity){
    cout<<"Stack Full"<<endl;
    return;
    }
    data[i]=element;
    i++;
}
int pop(){
    if(isEmpty()){
        cout<<"Stack Empty"<<endl;    
        return INT_MIN;   
    }
    // i--;
    return data[i-1];
}
int top(){
       if(isEmpty()){
        cout<<"Stack Empty"<<endl;    
        return INT_MIN;   
    }
    return data[i-1];
}
};
int main()
{
    stackusingarray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}
// Stack Full
// 40
// 40
// 30
// 20
// 10
// Stack Empty
// -2147483648
// 0
// 1