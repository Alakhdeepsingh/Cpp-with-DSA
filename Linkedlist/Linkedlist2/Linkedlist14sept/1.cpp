//Merge sort using Linkedlist
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
Node* mergeSort(Node *head) {
    //write your code here
    if(head->next == NULL)
        return head;
    int l=0;
    Node *temp=head, *temp1=head;
    
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    
    int midIndex=l/2;

    //If length of linked list is even
    if(l%2==0){
        midIndex=(l-1)/2;
    }else{
        midIndex=(l/2);
    }
    
    int i=0;
    while(i!=midIndex){
        i++;
        temp1=temp1->next;
    }
    
    Node *head2;
    head2=temp1->next; // address 5 ka jaega
    temp1->next=NULL; // 4 ke next ko null
    Node *head1=mergeSort(head);
    Node *head2=mergeSort(head2);
    Node *fh=mergeLL(head1, head2);
    return fh;

}  

// find middle point in LL
// compare
int main()
{
Node *head=createLinkedlist();
print(head);
Node *newhead=mergeSort(head);
print(newhead);
    return 0;
}

