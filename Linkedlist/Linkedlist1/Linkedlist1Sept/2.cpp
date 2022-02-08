#include<iostream>
using namespace std;
class *Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=x;
        next==NULL;
    }
};
 Node* takeInput_Better(){
    int data;
    cin>>data;
    Node *head =NULL;
    Node *tail=NULL;
        while(data!=-1){
        Node *newNode=newNode(data);
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
void insertNode(Node *head,int i,int data){
    Node*newNode=newNode(data);
    int count = 0;
    Node *temp=head;
    while(count <i-1){
        temp=temp->next; //doubts i temp-.next kya hai and temp mai koon si value jaegi
        count++;
    }
    Node *a=temp->next;
    temp->next=newNode;
    newNode->next=a;
    
}
void print (Node*head){
    while(head!=NULL){
        cout<<head->data;
        head=head->next;
    }
}
int main()
{
    Node *head=takeInput_Better();
    print(head->data);
    int i,data;
    cin>>i>>data;
    insertNode(head,i,data);
    print(head);
    return 0;
}

