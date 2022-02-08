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
    void print(node*head){
        while(head!=NULL){
            cout<<head->data;
            head=head-> next;
        }
       while(head!=NULL){
            cout<<head->data;
            head=head-> next;
        }
    }

    int main(){
        node n1(1);
        node *head =&n1;
        node n2(2);
        node n3(3);
        node n4(4);
        node n5(5);
        n1.next =&n2;
        n2.next =&n3;
        n3.next =&n4;
        n4.next =&n5;
        print(head);
        return 0;
    }
// 12345