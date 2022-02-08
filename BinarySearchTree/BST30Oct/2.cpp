//BST to Sorted LL
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
// BinaryTreeNode<int>* search(BinaryTreeNode<int>* root, int a){
//     if(root==NULL){ 
//         return NULL;
//     }
//     if(root->data==a){
//         return root;
//     }
//     if((root->data)<a){
//         search(root->right,a);
//     }
//     search(root->left,a);
// }
// int main()
// {
//     BinaryTreeNode<int>* root=takeinput();
//     printTree(root);
//     int a;
//     cin>>a;
//     BinaryTreeNode<int>* d=search(root,a);
//     if(d==NULL){
//         cout<<"NULL"<<endl;
//     }
//     else{
//         cout<<d->data<<endl;
//     }
//     return 0;
// }
// Following is the Binary Tree node structure
/**************
 
 template <typename T>
 class Node{
    public:
    T data;
    Node<T> *next;
    
    Node(T data){
        this -> data = data;
        this -> next = NULL;
    }
 };
 
 class BinaryTreeNode {
 public :
 T data;
 BinaryTreeNode<T> *left;
 BinaryTreeNode<T> *right;
 
 BinaryTreeNode(T data) {
 this -> data = data;
 left = NULL;
 right = NULL;
 }
 };
 ***************/

// Following is the Binary Tree node structure
/**************

 template <typename T>
 class Node{
    public:
    T data;
    Node<T> *next;

    Node(T data){
        this -> data = data;
        this -> next = NULL;
    }
 };

 class BinaryTreeNode {
 public :
 T data;
 BinaryTreeNode<T> *left;
 BinaryTreeNode<T> *right;

 BinaryTreeNode(T data) {
 this -> data = data;
 left = NULL;
 right = NULL;
 }
 };
 ***************/

class BST{
    public:
    Node<int>* head;
    Node<int>* tail;
};
BST helper(BinaryTreeNode<int>* root){
    if(root==NULL){
        BST b;
        b.head=NULL;
        b.tail=NULL;
        return b;
    }
    BST left;
    BST right;

    left=helper(root->left);
    right=helper(root->right);
    // BST ans;
    Node<int>* node=new Node<int>(root->data);
    if(left.tail!=NULL){
        left.tail->next=node;
    }
    node->next=right.head;
    BST b;

    if(left.head!=NULL){
        b.head=left.head;
    }
    else{
        b.head=node;
    }
    if(right.tail!=NULL){
        b.tail=right.tail;
    }
    else{
        b.tail=node;
    }
    return b;
}
void print (Node*head){
    while(head!=NULL){
        cout<<head->data;
        head=head->next;
    }
}
Node<int>* constructBST(BinaryTreeNode<int>* root) {
    BST b=helper(root);
    return b.head;
    int main()
{
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
    Node<int>* d=constructBST(root);
    print(d);
    return 0;
}


    //     if(root==NULL){
    //         return NULL;
    //     }
    //     Node<int> *node=new Node<int>(root->data);
    //     Node<int> *left=NULL;
    //     Node<int> *right=NULL;
    //     Node<int> *temp=NULL;

    //     if(root->left!=NULL){
    //        left =constructBST(root->left);    
    //     }

    //     if(root->right!=NULL){
    //         right=constructBST(root->right);
    //     }

    //     if(left!=NULL){
    //         temp=left;
    //         while(temp->next!=NULL){
    //             temp=temp->next;
    //     }

    //     temp->next=node;
    //     }else{
    //         left=node;
    //     }

    //     if(right!=NULL){
    //         node->next=right;
    //     }else{

    //         node->next=NULL;
    //     }
    //     return left;

}
// class BST{
  
//     public:
//         Node<int>* head;
//         Node<int>* tail;
    
    
// };


// BST helper(BinaryTreeNode<int>* root){
//     if(root==NULL){
//         BST b;
//         b.head=NULL;
//         b.tail=NULL;
//         return b;
//     }
//     BST left;
//     BST right;
//     if(root->left!=NULL){
//         left=helper(root->left);
//     }
    
//     if(root->right!=NULL){
//         right=helper(root->right);
//     }
//     BST ans;
//     Node<int>* node=new Node<int>(root->data);
//     if(root->left!=NULL){
//         ans.head=left.head;
//         left.tail=node;
        
//     }else{
        
//         ans.head=node;
//     }
    
    
    
//     if(root->right!=NULL){
//         node->next=right.head;
//         ans.tail=right.tail;
//     }else{
//         ans.tail=node;
//     }
//     return ans;
    
// }

// Node<int>* constructBST(BinaryTreeNode<int>* root) {
//     /* Don't write main().
//      * Don't read input, it is passed as function argument.
//      * Return output and don't print it.
//      * Taking input and printing output is handled automatically.
//      */
    
    
//     BST b=helper(root);
//     return b.head;
    
    
//     if(root==NULL){
//         return NULL;
//     }
//     Node<int> *node=new Node<int>(root->data);
//     Node<int> *left=NULL;
//     Node<int> *right=NULL;
//     Node<int> *temp=NULL;

//     if(root->left!=NULL){
//        left =constructBST(root->left);    
//     }
    
//     if(root->right!=NULL){
//         right=constructBST(root->right);
//     }
    
//     if(left!=NULL){
//         temp=left;
//         while(temp->next!=NULL){
//             temp=temp->next;
//     }
    
//     temp->next=node;
//     }else{
//         left=node;
//     }
    
//     if(right!=NULL){
//         node->next=right;
//     }else{
        
//         node->next=NULL;
//     }
//     return left;
    
// }
