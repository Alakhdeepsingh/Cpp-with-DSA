//Eliminates Duplicates from LinkedList
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
        Node *newNode=new Node(data);
        newNode->next=NULL;
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

// int count= 0;
// Node *temp=head;
// while(temp!=NULL){
//     if(temp->data==x){
//         return count;
//     }
//     count++; 
//     temp=temp->next;

//     }   
//     return -1;
// }
//     temp2->next=head;
//     temp1->next=NULL;
    
//     return h2;

void Duplicates(Node *head){
if(head==NULL||head->next==NULL){ 
    return;
}
Node *t1=head;
Node *t2=head;
while(t2!=NULL){
    if(t1->data!=t2->data){
        t1->next=t2;
        t1=t2;
        t2=t2->next;
    }
    else{
        t2=t2->next;
    }
}
t1->next=t2;
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
    Duplicates(head);
    cout<<endl;
    print(head);
    return 0;
}
// 1 2 2 3 3 3 3 4 4 4 -1
// 1 2 2 3 3 3 3 4 4 4
// 1 2 3 4

// 4 4 4 5 5 5 5 6 6 6 2 2 2 9 9 9 9 9 1 1 1 1 1 1 -1
// 4 4 4 5 5 5 5 6 6 6 2 2 2 9 9 9 9 9 1 1 1 1 1 1
// 4 5 6 2 9 1