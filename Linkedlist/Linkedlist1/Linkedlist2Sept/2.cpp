#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int x){
        this->data=x;
        next==NULL;
    }
};
 Node* takeInput_Better(){
    int data;
    cin>>data;
    Node *head =NULL;
    Node *tail=NULL;
        while(data!=-1){
        Node *newNode=new Node(data);
            if(head==NULL) {               
            head=newNode;  //newNode is the address of data
            tail=newNode; //newNode is the address of data
            }
            else{
            tail->next=newNode;
            tail=newNode;
            }
            cin>>data;
        }
    return head;
}
void insertNode(Node *head,int i,int data){
    Node*newNode=new Node(data);
    int count = 0;
    Node *temp=head;
    while(count <i-1){
        temp=temp->next;
        count++;
    }
    Node *a=temp->next;
    temp->next=newNode;
    newNode->next=a;
    
}
void print (Node*head){
    while(head!=NULL){
        cout<<head->data;
        head=head->next;
    }
}
void delete(Node *head){
    int count=0;
    while(count<i-1){
    int a=temp->next;
    int b=a->next;
    delete a;
}

int main()
{
    Node *head=takeInput_Better();
    print(head);
    int i,data;
    cin>>i>>data;
    insertNode(head,i,data);
    delete(i,head);
    print(head);
    return 0;
}