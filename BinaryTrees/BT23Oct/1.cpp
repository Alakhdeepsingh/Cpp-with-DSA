//Preorder Inorder 

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
int numNodes(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    int ans=1;
    ans=ans+numNodes(root->left)+numNodes(root->right);
    return ans;
}

void inorder(BinaryTreeNode<int>* root){
    if(root==NULL) {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
BinaryTreeNode<int>* buildTreeHelper(int* in,int* pre,int inS,int inE,int preS,int preE){
    if(inS>inE){//since size is same so I can write either (preS>preE)
        return NULL;
    }
    
    int rootData=pre[preS];
    int rootIndex=-1;
    for(int i=inS;i<=inE;i++){
        if(in[i]==rootData){
            rootIndex=i;
            break;
        }
    }
    int lInS=inS;
    int lInE=rootIndex-1;
    int lPreS=preS+1;
    int lPreE=lInE-lInS+lPreS;
    int rPreS=lPreE+1;
    int rPreE=preE;
    int rInS=rootIndex+1;
    int rInE=inE;
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    root->left=buildTreeHelper(in,pre,lInS,lInE,lPreS,lPreE);
    root->right=buildTreeHelper(in,pre,rInS,rInE,rPreS,rPreE);
    return root;
}
    BinaryTreeNode<int>* buildTree(int* in, int* pre, int size){
        return buildTreeHelper(in,pre,0,size-1,0,size-1);
    }

int main()
{
    int in[]={4,2,5,1,8,6,9,3,7};
    int pre[]={1,2,4,5,3,6,8,9,7};
    BinaryTreeNode<int>* root=buildTree(in,pre,9);
    printTree(root);
    cout<<"Num:"<< numNodes(root) <<endl;
    inorder(root);
    return 0;
}
// 1:L2R3
// 2:L4R5
// 4:
// 5:
// 3:L6R7
// 6:L8R9
// 8:
// 9:
// 7:
// Num:9
// 4 2 5 1 8 6 9 3 7 