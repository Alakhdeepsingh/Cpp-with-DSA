//Construct BST from Sorted Array
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
BinaryTreeNode<int>* sortedarray(vector<int>v , int s,int e){
    if(s>e){
        return NULL;
    }    
    else{
        int mid=(s+e)/2;
        BinaryTreeNode<int>* root=new BinaryTreeNode<int>(v[mid]);
        root->left=sortedarray(v,s,mid-1);
        root->right=sortedarray(v,mid+1,e);
        return root;
    }
}
BinaryTreeNode<int>* construct(vector<int>v){
    if(v.size()==1){
        BinaryTreeNode<int>* root=new BinaryTreeNode<int>(v[0]);
        return root;
    }
    int n=v.size();
    return sortedarray(v,0,n-1);
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }
    BinaryTreeNode<int>* d=construct(v);
    if(d==NULL){
        cout<<"NULL";
    }
    else{
        printTree(d);
    }
    return 0;
}
// 7
// 1 2 3 4 5 6 7
// 4:L2R6
// 2:L1R3
// 1:
// 3:
// 6:L5R7
// 5:
// 7: