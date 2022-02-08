//Reverse Linkedlist (Recursive method)
#include<iostream>
using namespace std;

class Node{
    public:
    int data; 
    Node *next;
    Node(int x){
        this->data=(x);
        next==NULL;
    }
};
Node *createLinkedlist(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1){
        Node *newnode=new Node(data);
        newnode->next=NULL;
            if(head==NULL) {               
                head=newnode;  //newnode is the address of data
                tail=newnode; //newnode is the address of data
            }
            else{
                tail->next=newnode;
                tail=newnode;
            }
            cin>>data;
    }
    return head;
}
Node *reverseRecursive(Node *head){
    if (head==NULL || head->next==NULL){
        return head;
    }
    Node *newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL; 
    return newhead;
}
// void hello(Node *newhead){
//     while(newhead!=NULL){
//         cout<<newhead->data<<" ";
//         newhead=newhead->next;
//     }
// }
void print (Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node *head=createLinkedlist();
    print(head);
    cout<<endl;
    Node* newhead=reverseRecursive(head);
    print(newhead);
    return 0;
}
// 1 2 3 4 5 -1
// 1 2 3 4 5
// 5 4 3 2 1