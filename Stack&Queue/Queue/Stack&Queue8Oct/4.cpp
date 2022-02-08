//Dynamic Queue
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Queueusingarray{ 
    int *data;
    int size=0;
    int capacity;
    int nextindex;
    int firstindex;
public:
Queueusingarray(int q){
    nextindex=0;
    firstindex=-1;
    capacity=size;
}
int dsize(){
    return size;
}
bool isEmpty(){
    return size==0;
}
void enqueue(T elements){
    if(size==capacity){
        T *newdata=new T [2*capacity];
        int j=0;
        for(int i=firstindex; i<capacity; i++){
            newdata[j]=data[i];
            j++;
        }
        for(int i=0; i<firstindex; i++){
            newdata[j]=data[i];
            j++;
        }
        delete[] data;
        data=newdata;
        firstindex=0;
        nextindex=capacity;
        capacity=capacity*2;
    }
    data[nextindex]=elements;
    nextindex=(nextindex+1)%capacity;
    if(data[firstindex]==-1){
        data[firstindex]=0;
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
        cout<<"Queue full"<<endl;
    }
    nextindex=(nextindex+1)%capacity;
    return data[nextindex];
    size--;
}
};
int main()
{
    Queueusingarray<int>q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dsize()<<endl;
    cout<<q.isEmpty()<<endl;
        return 0;
}

