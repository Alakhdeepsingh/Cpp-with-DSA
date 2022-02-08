//Delete Every N nodes
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
Node *ndelete(Node *head,int n,int m){
    Node *ans=head;
    Node *t1=head;
    Node *t2=head;
    while(t1!=NULL){
        for(int i=1; i<m; i++){
            if(t1==NULL){
                break;
            }
            t1=t1->next;
        }
        t2=t1->next;
        for(int i=1; i<n; i++){
            if(t2==NULL){
                break;
            }
            t2=t2->next;
        }
        if(t1==NULL){
            continue;
        }
        else{
            if(t2->next!=NULL){
            t1->next=t2->next;
            t1=t1->next;
            }
            else{
                t1->next=NULL;
                t1=t1->next;
            }
        }
    }
return ans;
}
int main()
{
Node *head=createLinkedlist();
print(head);
int n,m;
cin>>n>>m;
Node *d=ndelete(head,n,m);
print(d);
    return 0;
}
// 1 2 3 4 5 6 7 8 -1
// 1 2 3 4 5 6 7 8
// 3
// 2
// 1 2 3 6 7