//Midpoint of Linkedlist (length is even )
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
Node *length(Node *head){
    int len=0;     //traversing
    Node *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    int mid = (len-1)/2;
    int count = 0;   //taverse
    Node *temp1=head;
        while(count<mid+1){
            temp1=temp1->next;
            count++;
        }
// int i=0;
// Node* temp1=head;
// while(temp1!=NULL){
//     temp1=temp1->next;
// }
// else{
//     break;
// }
// i++;
// }
return temp1;
}
void print (Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node *head=createLinkedlist();
    print(head);
    Node *newNode=length(head);
    cout<<newNode->data;
    return 0;
}
// 1 2 3 4 5 6 -1
// 1 2 3 4 5 6 3

// 1 2 3 4 5 6 -1
// 1 2 3 4 5 6 4