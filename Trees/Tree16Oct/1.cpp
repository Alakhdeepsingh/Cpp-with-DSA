//DESTRUCTOR
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
    ~TreeNode(){
        for(int i=0;i<children.size(); i++){
            delete children[i];
        }
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
int main(){
TreeNode<int> *root=takeinput();
printTree(root);
delete(root);
printTree(root);
   return 0;
}
// 1:2 , 3 , 4 ,
// 2:5 , 6 ,
// 5:
// 6:
// 3:
// 4:
// 16020032:16020032 , 15990976 , 2006698304 , //garbage values proof that tree is deleted using destructor