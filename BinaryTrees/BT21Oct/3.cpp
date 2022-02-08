//Binary Tree Traversal
//INORDER
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
void inorder(BinaryTreeNode<int>* root){
    if(root==NULL) {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
    inorder(root);
    delete root;
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
// 8
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 9
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
// 6:L8R9
// 8:
// 9:
// 7:
// 4 2 5 1 8 6 9 3 7
