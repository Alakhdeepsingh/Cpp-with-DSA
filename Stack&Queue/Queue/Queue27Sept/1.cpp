//Dynamic Queue
#include<iostream>
using namespace std;
template<typename T>
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
    capacity=s;
}
int getsize(){
    return size;
}
bool isEmpty(){
    return size==0;
}
void enqueue(T element){
    if(size==capacity){
        T *newdata= ne T[*capacity];
        int j=0;
        for(int i=firstinde)
        cout<<"Queue Full"<<endl;
        return;
    }
    data[nextindex]=element;
    nextindex=(nextindex+1)%capacity;
    if(firstindex==-1){
        firstindex=-0;
    }
    size++;
}
T front(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return 0;
    }
    return data[firstindex];
}
T dequeue(){
    if(isEmpty()){
    cout<<"Queue is empty"<<endl;
    return 0;
    }
T ans =data[firstindex];
firstindex=(firstindex+1)%capacity;
size--;
if(size==0){
    firstindex=-1;
    nextindex=0;
}
return ans;
}
};
int main()
{
queueusingarray<int>q(5); 
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.enqueue(50);
q.enqueue(60);
cout<<q.front()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.getsize()<<endl;
cout<<q.isEmpty()<<endl;
return 0;
}
// 10
// 10
// 20
// 30
// 2
// 0

