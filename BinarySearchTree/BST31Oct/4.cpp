//Print Nodes at distance k from Node
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
void subtree(BinaryTreeNode<int>* root, int k){
    if(root==NULL||k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<endl;
        return;
    }
    subtree(root->left,k-1);
    subtree(root->right,k-1);
}
int distance (BinaryTreeNode<int>* root, BinaryTreeNode<int>* node,int k){
    if(root==NULL){ 
        return -1;
    }
    if(root==node){
        subtree(root,k);    
        return 0;
    }
    int b=distance(root->left,node,k);
    if(b!=-1){
        if(b+1==k){
            cout<<root->data<<endl;
        }
        else{
            distance(root->right,node,k-b-2);
        }
        return 1+b;
    }
    int v=distance(root->right,node,k);
    if(v!=-1){
        if(v+1==k){
            cout<<root->data<<endl;
        }
        else{
            distance(root->left,node,k-v-2);
        }
        return 1+v;
    }
    return -1;
}
int main()
{
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
    int a;
    cin>>a;
    BinaryTreeNode<int>* d=new BinaryTreeNode<int>(a);
    int k;
    cin>>k;
    distance(root,d,k);
    return 0;
}
// Enter root data
// 12
// Enter root data
// 6
// Enter root data
// 4
// Enter root data
// 5
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 3
// Enter root data
// 8
// Enter root data
// -1
// Enter root data
// 9
// Enter root data
// 15
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 10
// Enter root data
// 12
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 20
// Enter root data
// 18
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 7
// Enter root data
// -1
// Enter root data
// 10
// Enter root data
// -1
// Enter root data
// -1
// 12:L6R7
// 6:L4R3
// 4:L5
// 5:
// 3:L8R10
// 8:R9
// 9:L15
// 15:
// 10:L12R20
// 12:
// 20:L18
// 18:
// 7:R10
// 10:
// 3
// 3