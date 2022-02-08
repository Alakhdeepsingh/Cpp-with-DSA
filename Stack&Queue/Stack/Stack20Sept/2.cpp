#include<iostream>
#include <climits>
using namespace std;
class stackusingarray{
    int *data;
    int i;
    int capacity;
    public:
    stackusingarray(){
    data=new int[3];
    i=0;
    capacity=4;
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
        int *neData=new int[2*capacity];
        for(int m=0; m<capacity; m++){
            neData[m]=data[i];
        }
        capacity*=2;
        delete [] data;
        data=neData;
    }
    data[i]=element;
    i++;
    // cout<<"Stack Full"<<endl;
    // return;
    // }
  
}
int pop(){
    if(isEmpty()){
        cout<<"Stack Empty"<<endl;    
        return INT_MIN;   
    }
    i--;
    return data[i];
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
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}
// 50
// 50
// 50
// 1297805684
// 1297805684
// 1297805684
// 5
// 0