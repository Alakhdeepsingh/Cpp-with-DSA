//Merge Two Sorted linkedlist
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
void print (Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
Node *merge(Node *head1,Node *head2){
    Node *ft=NULL;
    Node *fh=NULL;
    Node *h1=head1;
    Node *h2=head2;
    if(h1->data>h2->data){
        ft=h2;
        fh=h2;
        h2=h2->next;
    }
    else{
        ft=h1;
        ft=h1;
        h1=h1->next;
    }
        while(h1!=NULL || h2!=NULL){
            if(h1->data>h2->data){
                //head will only change one time
                ft->next=h2;
                h2=h2->next;
                ft=ft->next;
                // fh++;
                // h2++;
            }
            else{
                ft->next=h1;
                // ft->next=h1;
                h1=h1->next;
                ft=ft->next;
                // fh++;
                // h1++;
            }
        }
        while(h1!=NULL){
            ft->next=h1;
            h1=h1->next;
            ft=ft->next;
        }
         while(h2!=NULL){
            ft->next=h2;
            h2=h2->next;
            ft=ft->next;
        }
        return fh;
}
int main()
{
    Node *head1=createLinkedlist();
    print(head1);
    Node *head2=createLinkedlist();
    print(head2);
    Node *newhead=merge(head1,head2);
    print(newhead);
    // Node *newNode=length(head);
    // cout<<newNode->data;
    return 0;
}

