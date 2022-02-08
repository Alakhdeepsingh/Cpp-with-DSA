//Diameter of Binary TreeNode
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
    int height(BinaryTreeNode<int>* root){
        if(root==NULL){
            return 0;
        }
        int ans1=1;
        ans1=ans1+max(height(root->left),height(root->right));
        return ans1;
    }
    int diameter(BinaryTreeNode<int>* root){
        if(root==NULL){
            return 0;
        }
    int option1=height(root->left)+height(root->right)+1;
    int option2=diameter(root->left);
    int option3=diameter(root->right);
    return max(option1,max(option2,option3));
}
int main()
{
    // int in[]={4,2,5,1,8,6,9,3,7};
    // int pre[]={1,2,4,5,3,6,8,9,7};
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
    // cout<<"Num:"<< numNodes(root) <<endl;
    int d=diameter(root);
    cout<<d<<" ";
// inorder(root);    
    delete root;
    return 0;
}
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
// -1
// Enter root data
// -1
// Enter root data
// 3
// Enter root data
// 6
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
// 2:L4R5
// 4:
// 5:
// 3:L6R7
// 7:
// 5




// Enter root data
// 1
// Enter root data
// 2
// Enter root data
// 3
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
// -1
// Enter root data
// -1
// -1
// 1:L2
// 2:L3
// 3:L4
// 4:L5
// 5:
// 5





// Enter root data
// 1
// Enter root data
// 2
// Enter root data
// 3
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
// 7
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// -1
// 1:L2
// 2:L3
// 3:L4R5
// 4:
// 5:L6R7
// 6:
// 7:
// 5


// Enter root data
// 1
// Enter root data
// 2
// Enter root data
// 3
// Enter root data
// 4
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// -1
// 1:L2
// 2:L3
// 3:L4
// 4:
// 4