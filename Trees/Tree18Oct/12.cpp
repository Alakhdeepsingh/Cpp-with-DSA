//Replace with depth
#include<bits/stdc++.h>
using namespace std;
template <typename T>
class TreeNode{
    public:
    int data;
    vector<TreeNode<int>*>children;
    TreeNode(T data){
        this->data=data;
    }
};
    TreeNode<int>* takeinput(){
    int rootdata;
    cout<<"Enter data"<<endl;
    cin>>rootdata;
    TreeNode<int>* root=new TreeNode<int>(rootdata);
    int n;
    cout<<"Enter number of children of"<<rootdata<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        TreeNode<int>* child = takeinput();
        root->children.push_back(child);
    }
    return root;
}
    void printTree(TreeNode<int>* root){
        if(root==NULL){
            return;
        }
    cout<<root->data<<":";
    for(int i=0; i<root->children.size(); i++){
        cout<<root->children[i]->data<<" , ";
    }
    cout<<endl;
    for(int i=0; i<root->children.size(); i++){
        printTree(root->children[i]);
    }
    }
    void replaced(TreeNode<int>* root,int depth){
        if(root==NULL){
            return;
        }
        root->data=depth;
        for(int i=0; i<root->children.size(); i++){
            replaced(root->children[i],depth+1);
        }
    }
int main(){
TreeNode<int> *root=takeinput();
printTree(root);
replaced(root,0);
printTree(root);
   return 0;
}
// 0:1 , 1 , 1 ,
// 1:2 , 2 ,
// 2:
// 2:3 ,
// 3:
// 1:
// 1:
