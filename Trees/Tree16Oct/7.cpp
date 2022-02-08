//Traversals
//PREORDER TRAVERSALS
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
    void preorder(TreeNode<int>* root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
    for(int i=0; i<root->children.size(); i++){
        preorder(root->children[i]);
    }
    }
int main(){
TreeNode<int> *root=takeinput();
printTree(root);
int d=numNodes(root);
cout<<d<<endl;
preorder(root);
   return 0;
}
// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0

// 1:2 , 3 , 4 ,
// 2:5 , 6 ,
// 5:
// 6:7 , 8 ,
// 7:
// 8:
// 3:
// 4:9 ,
// 9:
// 9
// 1 2 5 6 7 8 3 4 9

// Enter data
// 1
// Enter number of children of1
// 3
// Enter data
// 2
// Enter number of children of2
// 2
// Enter data
// 5
// Enter number of children of5
// 0
// Enter data
// 6
// Enter number of children of6
// 0
// Enter data
// 3
// Enter number of children of3
// 2
// Enter data
// 7
// Enter number of children of7
// 0
// Enter data
// 8
// Enter number of children of8
// 1
// Enter data
// 9
// Enter number of children of9
// 0
// Enter data
// 4
// Enter number of children of4
// 0
// 1:2 , 3 , 4 ,
// 2:5 , 6 ,
// 5:
// 6:
// 3:7 , 8 ,
// 7:
// 8:9 ,
// 9:
// 4:
// 9
// 1 2 5 6 3 7 8 9 4