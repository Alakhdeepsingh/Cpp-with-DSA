//Append Last N to first
// #include<iostream>
// using namespace std;
// class{
//     public:
//     int data; 
//     Node *next;
//     Node(int x){
//         this->data=x;
//         next=NULL;
//     }
// };
// Node *createLinkedlist(){
//     int data;
//     cin>>data;
//     Node *head=NULL;
//     Node *tail=NULL;
//     while(data!=-1){
//         if(head==NULL){
//             newnode->next=NULL;
//         Node *newNode=new Node(data);
//         head=newNode;
//         tail=newNode;
//         }
//         else{
//             tail->next=newNode
//             tail=newNode;
//         }
//         cin>>data;
//     }
//     return head;
// }
// void print (Node *head){
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }
// int main(){
// Node *head = createLinkedlist();
// print(head);
//     return 0;
// }


//Append Last N to first

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
// Node *finding(Node*head,int x){
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

void print (Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
//     append(*head,int n){
//     int len;
//     cin>>len;
//     int count=len-n;
//     int i;
//     while(temp !=NULL){
//         if(i<=count){
            
//         }
                
//     }
//     Node *h2;
//     while(data=-1){
//         if(head==NULL)
//     }
//     h2=newnode();
//     tail=tail->next;
//     tail=newnode;
// tail->next=head;

    // Node *temp=head;
	// Node *temp1=head;
	// int length=0;
	// while(temp->next!=NULL){
	// 	temp=temp->next;
	// 	length++;
	// }
	
	// int index=length-n;
	// int count=0;
	// while(count<index){
	// 	temp1=temp1->next;
    //     count++;	
	// }
	// if(count==index){
	// 	Node *x=temp1->next;
	// 	temp1->next=NULL;
	// 	temp->next=head;
	// 	head=x;
		
	// }
// 	return head;   
// }
    Node* append(Node *head,int n){
    Node *temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    int count=len-n;
    int i=1;
    Node *temp1=head;
    while(temp1!=NULL){
        if(i==count){
            break;
        }
        temp1=temp1->next;
        i++;   
    }
    Node *h2=temp1->next; // 3 ko store kar liya
    Node *temp2=h2;  // 3 ka address ko bacha ke rakne ke liye temp 2 mai store kar liya and abh 3 head hai and use ham traverse kar rahe hai
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=head; //joining 5to 1
    temp1->next=NULL;
    return h2;                 //2 ka next null kar dhege
}
int main(){
    Node *head=createLinkedlist();
    print(head);
    int n;
    cin>>n;
    head=append(head,n);
    print(head);

    return 0;
}
// 1 2 3 4 5 -1
// 1 2 3 4 5
// 3
// 3 4 5 1 2
