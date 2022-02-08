//insert duplicate node 
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
BinaryTreeNode<int>* duplicate(BinaryTreeNode<int>* root){
    if(root==NULL){ 
        return NULL;
    }
    duplicate(root->left);
    duplicate(root->right);
    BinaryTreeNode<int>* d=root->left;
    root->left=new BinaryTreeNode<int>(root->data);
    root->left->left=d;
    return root;
}
int main()
{
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
    BinaryTreeNode<int>* d=duplicate(root);
    cout<<"new Tree"<<endl;
    printTree(d);
    return 0;
}
// Enter root data
// 10
// Enter root data
// 7
// Enter root data
// 2
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 8
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 15
// Enter root data
// 12
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 25
// Enter root data
// -1
// Enter root data
// -1
// 10:L7R15
// 7:L2R8
// 2:
// 8:
// 15:L12R25
// 12:
// 25:
//NEW TREE
// 10:L10R15
// 10:L7
// 7:L7R8
// 7:L2
// 2:L2
// 2:
// 8:L8
// 8:
// 15:L15R25
// 15:L12
// 12:L12
// 12:
// 25:L25
// 25: