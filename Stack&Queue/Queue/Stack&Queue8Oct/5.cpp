//Queue using Linkedlist
#include<bits/stdc++.h>
using namespace std;
template<typename t>
class queue{
    Node<T>*head;
    Node<T>*tail;
    int size;
}
public:
queue(){
    head=NULL;
    tail=NULL;
    size=0;
}
int getsize(){
    return size;
}
bool isEmpty(){
    return size==0;
}
voud enqueue(T element){
    Node<T>*newnode=new Node<T>(element);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
    size++;
}
T front(){
    if(isEmpty()){
        return 0;
    }
    return head->data;
}
T dequeue(){
    if(isEmpty()){
        return 0;
    }
    T ans=head->data;
    Node<T>*temp=head->data;
    head=head->next;
    delete temp;
    size--;
    return ans;
}

int main()
{

    return 0;
}

