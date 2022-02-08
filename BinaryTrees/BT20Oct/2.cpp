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
    cout<<"Enter data"<<endl;
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
int main(){
    BinaryTreeNode<int>*root = takeinput();
    printTree(root);
    delete root;
    return 0;
}
// Enter data
// 1
// Enter data
// 2
// Enter data
// -1
// Enter data
// -1
// Enter data
// 3
// Enter data
// -1
// Enter data
// -1
// 1:L2R3
// 2:
// 3: