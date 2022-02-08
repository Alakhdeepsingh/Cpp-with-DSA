//Count nodes
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
int numNodes(TreeNode<int> *root){
    int ans=1;
    for(int i=0; i<root->children.size(); i++){
        ans=ans+numNodes(root->children[i]);
    }
    return ans;
}

int main(){         
    TreeNode<int> *root=takeinput();
    // printTree(root);
    int d=numNodes(root);
    printTree(root);
    cout<<d<<endl;
    return 0;
}
// 10:5 , 4 ,
// 5:8 , 7 ,
// 8:
// 7:
// 4:3
// 3:
// 6

