//Second Largest Element in Tree
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
    void secmx(TreeNode<int>* root,TreeNode<int>**mx,TreeNode<int>**s2mx){
        if(root==NULL){
            return;
        }
        if(*mx==NULL){
            *mx=root;
        }
        else if((root->data)>(*mx->data)){
            *s2mx=*mx;
            *mx=root;
        }
        else if(*s2mx==NULL){
            if(root->data<(*mx->data)){
                *s2mx=root;
            }
        }
        else if(root->data<(*mx->data)&&root->data>(*s2mx->data)){
            *s2mx=root;
        }
        for(int i=0; i<root->children.size(); i++){
            secmx(root->children[i],mx,s2mx);
        }
    }
    TreeNode<int>* secondmx(TreeNode<int>* root){
        TreeNode<int>* mx=NULL;
        TreeNode<int>* s2mx=NULL;
        secmx(root,&mx,&s2mx);
        if(s2mx==NULL){
            return NULL;
        }
        else{
            return s2mx;
        }
    }

int main(){
TreeNode<int> *root=takeinput();
printTree(root);
TreeNode<int> *d=secondmx(root);
if(d==NULL){
    cout<<-1;
}
else{
cout<<d->data<<" ";
}
   return 0;
}