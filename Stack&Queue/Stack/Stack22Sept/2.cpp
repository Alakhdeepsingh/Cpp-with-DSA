//Stack using linkedlist
#include<iostream>
#include<climits>
#include <stack>
using namespace std;
template <typename T>

class Node{
    public:
    T data;
    Node<T> *next;
    Node(T data){
        this->data=data;
        next=NULL;
    }
};
template<typename T>
class stk {
    Node<T>*head;
    int size;
    public:
    stack(){
        head=NULL;
        size=0;
    }
    T dsize(){
       return size;
    }
    bool isEmpty(){
        return size==0;
    }
    void push(T element){
        Node<T> *newNode=new Node <T>(element);
        newNode->next=head;
        head=newNode;
        size++;

    }
    T pop(){
    if(isEmpty()){
        return 0;
    }
    T ans =head->data;
    Node<T>*temp=head;
    head=head->next;
    delete temp;
    size--;
    return ans;
    }
    T top(){
    if(isEmpty()){
        return 0;
    }
    return head->data;
    } 
};

int main()
{
stk<int>s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.dsize()<<endl;
cout<<s.isEmpty()<<endl;
    return 0;
}
// 50
// 50
// 40
// 30
// 4201314
// 0
