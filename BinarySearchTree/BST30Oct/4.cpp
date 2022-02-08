//Path Sum Root to Leaf
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
void sum(BinaryTreeNode<int>* root, int k,int currsum,vector<int>&v){
    if(root==NULL){
        return;
    }
    currsum+=root->data;
    v.push_back(root->data);
    if(currsum==k&&root->left==NULL&&root->right==NULL){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    sum(root->left,k,currsum,v);

    sum(root->right,k,currsum,v);
    v.pop_back();
}
void print(BinaryTreeNode<int>* root, int k){
    vector<int>v;
    sum(root,k,0,v);
}
int main()
{
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
    int k;
    cin>>k;
    print(root,k);
    return 0;
}
// Enter root data
// 6
// Enter root data
// 3
// Enter root data
// 1
// Enter root data
// 2
// Enter root data
// -1
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
// 2
// Enter root data
// 4
// Enter root data
// 1
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 1
// Enter root data
// 3
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
// 6:L3R2
// 3:L1R5
// 1:L2
// 2:
// 5:
// 2:L4R1
// 4:L1
// 1:
// 1:L3R8
// 3:
// 8:
// 12
// 6 3 1 2
// 6 2 1 3