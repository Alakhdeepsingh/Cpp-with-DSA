//Removed leaf nodes
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
BinaryTreeNode<int>* remove(BinaryTreeNode<int>* root){
    if(root==NULL){
        return NULL;
    }
    else if(root->left==NULL && root->right==NULL){
        return NULL;
    }
    else if(root->left->left==NULL && root->left->right && root->right->left==NULL && root->right->right==NULL){
        root->left=NULL;
        root->right=NULL;
        return root;
    }
    else{
        root->left=remove(root->left);
        root->right=remove(root->right);
        return root;
    }
}

int main()
{
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
    root=remove(root);
    cout<<"REMOVED LEAF NODES,NEW TREE"<<endl;
    printTree(root);
    return 0;
}
// Enter root data
// 1
// Enter root data
// 2
// Enter root data
// 4
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 5
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 3
// Enter root data
// 6
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 7
// Enter root data
// -1
// Enter root data
// -1
// 1:L2R3
// 2:L4R5
// 4:
// 5:
// 3:L6R7
// 6:
// 7:
// REMOVED LEAF NODES,NEW TREE
// 1:L2R3
// 2:
// 3: