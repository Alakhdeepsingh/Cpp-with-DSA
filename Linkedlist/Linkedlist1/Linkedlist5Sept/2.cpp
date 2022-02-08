#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next; 
    Node (int x){ 
        (*this).data=x;
        next=NULL;
    } 
};
Node getdata(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1){
         Node *newNode= new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            Node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;      
        }
        cin>>data;
    }
    return head;
}
void print (Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
Node findNode(Node *head,int curr,int x,int data){
    Node head=
// void delete = Node *head
int main(){
    Node *head=getdata();
    print(head);
    int curr,data,x;
    cin>>curr>>data;
    *head=findNode(head,curr,x,data);
    print(head);

    return 0;
}