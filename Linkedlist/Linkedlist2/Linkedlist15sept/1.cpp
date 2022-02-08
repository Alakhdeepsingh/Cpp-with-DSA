//Even after odd LL
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
Node *even(Node *head){
Node *Oddhead=NULL;
Node *Oddtail=NULL;
Node *Evenhead=NULL;
Node *Eventail=NULL;
int cnt1=0;
int cnt2=0;
while(head!=NULL){
if(head->data%2==0){
    if(cnt1==0){
        cnt1=1;
        Evenhead=head;
        Eventail=head;
        head=head->next;
        Eventail=Eventail->next;
    }
    else{
        Eventail=head;
        head=head->next;
        Eventail=Eventail->next;
    }
}
    else {
        if(cnt2==0){
        cnt2=1;
        Oddhead=head;
        Oddtail=head;
        head=head->next;
        Oddtail=Oddtail->next;
        }
    else{
        Oddtail=head;
        head=head->next;
        Oddtail=Oddtail->next;
    }
    }   
}
    Oddtail->next=NULL;
    Eventail->next=NULL;
    Oddtail->next=Evenhead;
    return Oddhead;
//    Node *temp1=Oddhead;
//     while(temp1!=NULL){
//         temp1=temp1->next;
//     }
}
int main()
{
Node *head=createLinkedlist();
print(head);
Node *newhead=even(head);
cout<<newhead->data<<endl;
print(newhead);
    return 0;
}

    // Node *head1=createLinkedlist();
    // print(head1);
    // Node *head2=createLinkedlist();
    // print(head2);
    // Node *newhead=merge(head1,head2);
    // print(newhead);