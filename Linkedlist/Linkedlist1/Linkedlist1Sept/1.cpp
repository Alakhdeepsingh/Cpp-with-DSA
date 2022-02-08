//Time complexity of this code is O(N)
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
    Node *takeInput(){
        int data;
        cin>>data;
        Node *head =NULL;
        Node *tail=NULL;
            while(data!=-1){
                Node *newNode=new Node(data); 
                if(head==NULL)  {              
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
        void print (Node*head){
            while(head!=NULL){
                cout<<head->data<<" ";
                head=head->next;
            }
        }
int main(){
    Node *head=takeInput();
    print (head);
    return 0;
}
// 1 2 3 4 5 -1
// 1 2 3 4 5