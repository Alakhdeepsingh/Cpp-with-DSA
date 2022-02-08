//Find a Node in LinkedList
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
int finding(Node*head,int x){
int count= 0;
Node *temp=head;
while(temp!=NULL){
    if(temp->data==x){
        return count;
    }
    count++; 
    temp=temp->next;

    }   
    return -1;
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
    int x;
    cin>>x;
    int d =finding(head,x);
    cout<<d;
    return 0;
}
// 1 2 3 4 5 -1
// 1 2 3 4 5
// 3
// 2