//level wise Linkedlist
#include<bits/stdc++.h>
using namespace std;
template <typename T>
class BinaryTreeNode{
    public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
    BinaryTreeNode(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};
class *Node{
    public:
    int x;
    int data;   
    Node *next;
    Node(int data){
        this->data=x;
        next==NULL;
    }
};
void printTree(BinaryTreeNode<int>*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left!=NULL){
        cout<<"L"<<root->left->data;
    }
    if(root->right!=NULL){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}
BinaryTreeNode<int>* takeinput(){
    int rootdata;
    cout<<"Enter root data"<<endl;
    cin>>rootdata;
    if(rootdata==-1){
        return NULL;
    }
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootdata);
    BinaryTreeNode<int>* leftchild=takeinput();
    BinaryTreeNode<int>* rightchild=takeinput();
    root->left=leftchild;
    root->right=rightchild;
    return root;
}
void print (Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
vector<Node*> levelwise(BinaryTreeNode<int>* root){
    vector<Node*>v;
    if(root==NULL){
        return v;
    }
    queue<BinaryTreeNode<int>*>d;
        d.push(root);
        while(d.size()!=0){         
            int x=d.size();
            Node* head=NULL;
            Node* tail=NULL;
            for(int i=0; i<x; i++){
                BinaryTreeNode<int>* front=d.front();
                Node *newNode=newNode(front->data);
                if(head==NULL) {               
                    head=newNode;  //newNode is the address of data
                    tail=newNode; //newNode is the address of data
                }
                else{
                tail->next=newNode;
                tail=tail->next;;
                }
                d.pop();
                if(front->left!=NULL){
                    d.push(front->left);       
                }
                if(front->right!=NULL){
                    d.push(front->right);
                }
            }
            tail->next=NULL;
            tail=tail->next;
            v.push_back(head);
        }
        return v;
}

int main()
{
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
    vector<Node*> ans=levelwise(root);
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++){
        print(ans[i]);
    }
    // printTree(root);
    return 0;
}