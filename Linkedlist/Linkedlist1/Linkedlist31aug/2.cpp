#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next; 
    node (int x){ 
        (*this).data=x;
        next=NULL;
    } 
};    
    node* takeInput(){
        int data;
        cin>>data;
        node*head=NULL;
        while (data!=-1){
            node *newNode=new node(data);
            if(head==NULL){
                head = newNode;
            }
            else{
                node *temp=head;
                while(temp->next!=NULL){
                    temp=temp->next;
                }
                temp->next=newNode;
            }
            cin>>data;
        }
        return head;
    }
    void print(node*head){
        while(head!=NULL){
            cout<<head->data;
            head=head-> next;
        }
    }
int main(){
    node *head=takeInput();
    print(head);
        // node n1(1);
        // node *head =&n1;
        // node n2(2);
        // node n3(3);
        // node n4(4);
        // node n5(5);
        // n1.next =&n2;
        // n2.next =&n3;
        // n3.next =&n4;
        // n4.next =&n5;
        // print(head);
        // print(head);
    return 0;
}
