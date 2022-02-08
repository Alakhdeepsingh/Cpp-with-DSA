//pair sum Binary Tree
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
void pairsum(BinaryTreeNode<int>* root,int sum,BinaryTreeNode<int>* mainroot ){
    if(root==NULL){ 
        return;
    }
    if(root->data==INT_MAX){
        return;
    }
    pairsum(root->left,sum,mainroot);
     pairsum(root->right,sum,mainroot);
    int x=root->data;
    int r=sum-x;
    BinaryTreeNode<int>* a=search(mainroot,r);
    if(a==NULL){
        return;
    }    
    else{
        cout<<x<<" "<<a->data<<endl;
        a->data=INT_MAX;
    }
}
int main()
{
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
    int sum;
    cin>>sum;
    pairsum(root,sum,root);
    return 0;
}
// Enter root data
// 6
// Enter root data
// 4
// Enter root data
// 3
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
// Enter root data
// 8
// Enter root data
// 2
// Enter root data
// 5
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 1
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// -1
// 6:L4R8
// 4:L3R7
// 3:
// 7:
// 8:L2
// 2:L5R1
// 5:
// 1:
// 4
// 1 3



// Enter root data
// 6
// Enter root data
// 4
// Enter root data
// 3
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
// Enter root data
// 8
// Enter root data
// 2
// Enter root data
// -1
// Enter root data
// 5
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 1
// Enter root data
// -1
// Enter root data
// -1
// 6:L4R8
// 4:L3R7
// 3:
// 7:
// 8:L2R1
// 2:R5
// 5:
// 1:
// 7
// 3 4
// 1 6