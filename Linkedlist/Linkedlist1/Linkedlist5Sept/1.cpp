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
    Node*newNode=new Node(data);
    int count=0;
    while(count<x-1){
        if(count==x){
            Node temp=temp->next;
            count++;
            return curr;
        }
        else{
            return 0;
        }
    }
}
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
// void insertNode(Node *head,int i,int data){
//     Node*newNode=newNode(data);
//     int count = 0;
//     Node *temp=head;
//     while(count <i-1){
//         temp=temp->next; //doubts i temp-.next kya hai and temp mai koon si value jaegi
//         count++;
//     }
//     Node *a=temp->next;
//     temp->next=newNode;
//     newNode->next=a;
    
// }
// void print (Node*head){
//     while(head!=NULL){
//         cout<<head->data;
//         head=head->next;
//     }
// }
// int main()
// {
//     Node *head=takeInput_Better();
//     print(head->data);
//     int i,data;
//     cin>>i>>data;
//     insertNode(head,i,data);
//     print(head);
//     return 0;
// }
