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
int main()
{
    BinaryTreeNode<int>*root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int>*node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int>*node2 = new BinaryTreeNode<int>(3);
    root->left=node1;
    root->right=node2;
    printTree(root);
    delete root;
    return 0;
}
// 1:L2R3
// 2:
// 3:
