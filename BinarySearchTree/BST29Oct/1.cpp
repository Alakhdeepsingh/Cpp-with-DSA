//Print Element in Range
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
void range(BinaryTreeNode<int>* root, int start, int end){
    if(root==NULL){ 
        return;
    }
    if(start<root->data){
        range(root->left,start,end);
    }
    if(start<=root->data&&root->data<=end){
       cout<<root->data<<endl;
    }
    if(end>root->data){
    range(root->right,start,end);
    }
}
int main()
{
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
    int start,end;
    cin>>start>>end;
    range(root,start,end);
    
    return 0;
}