//Balanced Binary Tree
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
pair<int,int> balanced(BinaryTreeNode<int>* root,int *height){
    int isbalancedleft=0;
    int isbalancedright=0;
    int leftheight=0;
    int rightheight=0;
    if(root==NULL){
        *height=0;
        return {*height, 1};
    }
    isbalancedleft=balanced(root->left,&leftheight).second;
    isbalancedright=balanced(root->right,&rightheight).second;
    *height=max(leftheight,rightheight)+1;
    if(abs(leftheight-rightheight)<=1){
        if(isbalancedleft&&isbalancedright){
           return {*height,1};
        }
    }
    else{
        return {*height,0};
    }
}

int main()
{
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
    int height=0;
    if(balanced(root,&height).second==1){
        cout<<"TREE BALANCED"<<endl;
    }
    else{
        cout<<"TREE NOT BALANCED"<<endl;
    }
    delete root;
    return 0;
}
// Enter root data
// 1
// Enter root data
// 2
// Enter root data
// 13
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 4
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
// -1
// Enter root data
// 6
// Enter root data
// -1
// Enter root data
// 7
// Enter root data
// -1
// Enter root data
// -1
// 1:L2R3
// 2:L13R4
// 13:
// 4:R5
// 5:
// 3:R6
// 6:R7
// 7:
// TREE NOT BALANCED


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
// 6
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 3
// Enter root data
// -1
// Enter root data
// 8
// Enter root data
// -1
// Enter root data
// -1
// 1:L2R3
// 2:L4R5
// 4:
// 5:L6
// 6:
// 3:R8
// 8:
// TREE BALANCED