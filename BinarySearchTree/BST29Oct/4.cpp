//LCA of Binary Tree
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
// BinaryTreeNode<int>* search(BinaryTreeNode<int>* root, int a){
//     if(root==NULL){ 
//         return NULL;
//     }
//     if(root->data==a){
//         return root;
//     }
//     if((root->data)<a){
//         search(root->right,a);
//     }
//     search(root->left,a);
// }
bool ispath(BinaryTreeNode<int>* root,BinaryTreeNode<int>* n,vector<BinaryTreeNode<int>*>&v){
    v.push_back(root);
    if(root->data==n->data){
        return true;
    }
    else if((root->left!=NULL&&ispath(root->left,n,v))||(root->right!=NULL&&ispath(root->right,n,v))){
        return true;
    }
    v.pop_back();
    return false;

}
BinaryTreeNode<int>* lca(BinaryTreeNode<int>* root,BinaryTreeNode<int>* n1, BinaryTreeNode<int>* n2){
    // if(root==NULL){ 
    //     return NULL;
    // }
    vector<BinaryTreeNode<int>*>v1;
    vector<BinaryTreeNode<int>*>v2;
    if(!ispath(root,n1,v1)&&!ispath(root,n2,v2)){
        return NULL;
    }
    else if(!ispath(root,n1,v1)&&ispath(root,n2,v2)){
        return n2;
    }
    else if(ispath(root,n1,v1)&&!ispath(root,n2,v2)){
        return n1;
    }
    else{
        int x=v1.size();
        int y=v2.size();
        for(int i=0; i<min(x,y); i++){
            if(v1[i]->data!=v2[i]->data){
                return v1[i-1];
            }
        }
        if(x==min(x,y)){
            return v1[x-1];
        }
        else{
            return v2[y-1];
        }
    }
}
int main()
{
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
    int n1data,n2data;
    cin>>n1data>>n2data;
    BinaryTreeNode<int>* n1=new BinaryTreeNode<int>(n1data);
    BinaryTreeNode<int>* n2=new BinaryTreeNode<int>(n2data);
    BinaryTreeNode<int>* d=lca(root,n1,n2);
    if(d==NULL){
        cout<<-1<<endl;
    }
    else{
    cout<<d->data<<endl;
    }
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
// 7
// Enter root data
// 8
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 9
// Enter root data
// Enter root data
// -1
// 1:L2R3
// 2:L4R5
// 4:
// 5:L6
// 6:
// 3:R7
// 7:L8R9
// 8:
// 9:
// 5 6
// 5


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
// 7
// Enter root data
// 8
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
// 1:L2R3
// 2:L4R5
// 4:
// 5:L6
// 6:
// 3:R7
// 7:L8R9
// 8:
// 9:
// 5 20
// 5