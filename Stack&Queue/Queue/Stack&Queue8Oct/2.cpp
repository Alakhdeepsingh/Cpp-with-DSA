#include<bits/stdc++.h>
using namespace std;
template <typename T>
class queueusingarray{
    T *data;
    int firstindex;
    int nextindex;
    int size;
    int capacity;

public:
queueusingarray(int s){
    data=new T[s];
    nextindex=0;
    firstindex=-1;
    size=0;
    capacity=size;
}
int getsize(){
    return size;
}
bool isEmpty(){
    return size==0;
}
void enqueue(T element){
    if(size==capacity){
        cout<<"Queue full"<<endl;
        return;
    }
    data[nextindex]=element;
    nextindex=(nextindex+1)%capacity;
    if(nextindex==-1){
        firstindex=0;
    }
    size++;
}
T front(){
    if(isEmpty()){
        cout<<"Queue Full"<<endl;
        return 0;
    }
    return data[firstindex];
}
T dequeue(){
    if(isEmpty()){
        cout<<"Queue Full"<<endl;
        return 0;
    }
    T ans=data[firstindex];
    firstindex=(firstindex+1)%capacity;
    size--;
    if(size==0){
        firstindex=-1;
        nextindex=0;
    }
    return ans;
}
};
int main(){
queueusingarray<int>q(5);
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.enqueue(50);
cout<<q.front()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.getsize()<<endl;
cout<<q.isEmpty()<<endl;
return 0;
}

