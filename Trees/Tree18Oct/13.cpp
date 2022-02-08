//Node with maximum child sum
//solving using pair
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
class pair{
    public:
    TreeNode<int>**x;
    int sum;
    pair(TreeNode<int>** m,int y){
        this->x=m;
        this->sum=y;
    }  
}
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
    int numNodes(TreeNode<int>* root){
        if(root==NULL) {
            return 0;
        }
        int ans=1;       
        for(int i=0; i<root->children.size(); i++){
            ans=ans+(numNodes(root->children[i]));
        }
        return ans;
    }
    // void postorder(TreeNode<int>* root){
    //     if(root==NULL){
    //         return;
    //     }
    // for(int i=0; i<root->children.size(); i++){
    //     postorder(root->children[i]);
    // }
    // cout<<root->data<<" "; 
    // }
    // void sum(TreeNode<int>* root,TreeNode<int>** temp1,int* ans1){
    //     if(root==NULL){
    //         return;
    //     }
    //     int ans=0;
    //     ans=root->data;
    //     for(int i=0; i<root->children.size(); i++){
    //         ans=ans+root->children[i]->data;
    //     }
    //     if(*ans1<ans){
    //         *ans1=ans;
    //         *temp1=root;
    //     }
    //     for(int i=0; i<root->children.size(); i++){
    //         sum(root->children[i],temp1,ans1);
    //     }
    // }
    // TreeNode<int>* mxNode(TreeNode<int>* root){
    //     int ans1=INT_MIN;
    //     if(root==NULL){
    //         return NULL;
    //     }
    //     TreeNode<int>* temp2;
    //     sum(root, &temp2, &ans1);
    //     return temp2;
    // }
        void sum(TreeNode<int>* root,TreeNode<int>** temp1,int* ans1){
        if(root==NULL){
            return;
        }
        int ans=0;
        ans=root->data;
        for(int i=0; i<root->children.size(); i++){
            ans=ans+root->children[i]->data;
        }
        if(*ans1<ans){
            *ans1=ans;
            *temp1=root;
        }
        for(int i=0; i<root->children.size(); i++){
            sum(root->children[i],temp1,ans1);
        }
    }
    TreeNode<int>* mxNode(TreeNode<int>* root){
        int ans1=INT_MIN;
        if(root==NULL){
            return NULL;
        }
        TreeNode<int>* temp2;
        pair TreeNode*p
        sum(root, &temp2, &ans1);
        return temp2;
    }
int main(){
TreeNode<int> *root=takeinput();
printTree(root);
// postorder(root);
TreeNode<int> *d=mxNode(root);
cout<<d->data<<endl;
   return 0;
}