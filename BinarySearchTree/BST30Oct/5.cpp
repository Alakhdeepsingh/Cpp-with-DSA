//Replace with Sum of greater nodes
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
void replacenodes(BinaryTreeNode<int>* root,int* sum){
    if(root==NULL){ 
        return;
    }
    replacenodes (root->right,sum);
    *sum=*sum + root->data;
    root->data=*sum;
    replacenodes (root->left,sum);
}
void replace(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    else{
        int sum = 0;
        replacenodes(root,&sum);
    }
}
BinaryTreeNode<int>* search(BinaryTreeNode<int>* root, int a){
    if(root==NULL){ 
        return NULL;
    }
    if(root->data==a){
        return root;
    }
    if((root->data)<a){
        search(root->right,a);
    }
    search(root->left,a);
}
int main()
{
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
    replace(root);
    cout<<root->data<<endl;
    printTree(root);
    return 0;
}

// Enter root data
// 6
// Enter root data
// 3
// Enter root data
// 2
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
// 8
// Enter root data
// 7
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
// 6:L3R8
// 3:L2R5
// 2:
// 5:
// 8:L7R9
// 7:
// 9:
// 30
// 30:L38R17
// 38:L40R35
// 40:
// 35:
// 17:L24R9
// 24:
// 9: