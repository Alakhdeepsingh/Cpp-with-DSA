//Pair sum in BST
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
bool Binary(BinaryTreeNode<int>* root,int sum, set<int>&s){
    if(root==NULL){
        return false;
    }
    if(Binary(root->left,sum,s)==true){
        return true;
    }
    int x=sum-root->data;
    if(s.find(x)!=s.end()){
        cout<<x<<" "<<root->data<<endl;
        return true;
    }
    else{
        s.insert(root->data);
    }
    return Binary(root->right,sum,s);
}
void pairsum(BinaryTreeNode<int>* root, int sum ){
    set<int>s;
    if(Binary(root,sum,s)==false){
        cout<<"NO SUCH PAIR FOUND"<<endl;
    }
}
// void pairsum(BinaryTreeNode<int>* root,int sum,BinaryTreeNode<int>* mainroot ){
//     if(root==NULL){ 
//         return;
//     }
//     if(root->data==INT_MAX){
//         return;
//     }
//     pairsum(root->left,sum,mainroot);
//      pairsum(root->right,sum,mainroot);
//     int x=root->data;
//     int r=sum-x;
//     BinaryTreeNode<int>* a=search(mainroot,r);
//     if(a==NULL){
//         return;
//     }    
//     else{
//         cout<<x<<" "<<a->data<<endl;
//         a->data=INT_MAX;
//     }
// }
int main()
{
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
    int a;
    cin>>a;
    pairsum(root,a);
    return 0;
}
// Enter root data
// 10
// Enter root data
// 8
// Enter root data
// 4
// Enter root data
// 1
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 6
// Enter root data
// 5
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
// 9
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 21
// Enter root data
// 13
// Enter root data
// 12
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 28
// Enter root data
// 23
// Enter root data
// -1
// Enter root data
// 24
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// -1
// 10:L8R21
// 8:L4R9
// 4:L1R6
// 1:
// 6:L5R7
// 5:
// 7:
// 9:
// 21:L13R28
// 13:L12
// 12:
// 28:L23
// 23:R24
// 24:
// 25
// 12 13