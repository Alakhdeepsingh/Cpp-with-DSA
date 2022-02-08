#include<iostream>
#include<queue>
using namespace std;
// template< typename T>
// class Node{
//     public:
//     T data;
//     Node<T>*next;
//     Node(T data){
//         this->data=data;
//         next=NULL;
//     }
// };
// template<typename T>
// class queue{
//     Node<T> *head;
//     Node<T> *tail;
//     int size;
//     public:
//     queue(){
//         head=NULL;
//         tail=NULL;
//         size=0;
//     }
//     int getSize(){
//         return size;
//     }
//     bool isEmpty(){
//         return size==0;
//     }
//     void enqueue(T element){
//         Node<T>*newNode=new Node<T>(element);
//         if(head==NULL){
//             head=newNode;
//             tail=newNode;
//         }
//         else{
//             tail->next=newNode;
//             tail=newNode;
//         }
//         size++;
//     }
//     T front(){
//         if(isEmpty()){
//             return 0;
//         }
//        return head->data; 
//     }
//     T dequeue(){
//         if(isEmpty()){
//             return 0;
//         }
//         T ans=head->data;
//         Node<T> *temp=head;
//         head=head->next;
//         delete temp;
//         size--;
//         return ans;
//     }
// };
int main()
{
queue<int>q; 
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.push(60);
cout<<q.front()<<endl;
q.pop();
cout<<q.front()<<endl;
cout<<q.size()<<endl;
cout<<q.empty()<<endl;
return 0;
}
// 10
// 20
// 5
// 0


// q.enqueue(10);
// q.enqueue(20);
// q.enqueue(30);
// q.enqueue(40);
// q.enqueue(50);
// q.enqueue(60);
// cout<<q.front()<<endl;
// cout<<q.dequeue()<<endl;
// cout<<q.dequeue()<<endl;
// cout<<q.dequeue()<<endl;
// cout<<q.getSize()<<endl;
// cout<<q.isEmpty()<<endl;