//Midpoint of Linkedlist  (length is even )
//Midpoint of Linkedlist (length is odd )
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
Node *mid (Node *head){
Node* fast=head->next;
Node* slow=head;
Node *temp=head;
    if(head!=NULL){
        while(fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
}
return slow;
}
void display (Node *newhead){
    while(newhead!=NULL){
        cout<<newhead->data<<" ";
        newhead=newhead->next;
    }
}
void print (Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";

        
        head=head->next;
    }
}
// void display (Node *newhead){
//     while(newhead!=NULL){
//         cout<<newhead->data<<" ";
//         newhead=newhead->next;
//     }
// }
int main(){
    Node *head=createLinkedlist();
    print(head);
    Node *newhead=mid(newhead);
    display(newhead);
    return 0;
}
