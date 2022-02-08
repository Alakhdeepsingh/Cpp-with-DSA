//Print Tree using Queue
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
// TreeNode<int>* takeInputLevelwise(){
//     int rootdata;
//     cin>>rootdata;
//     TreeNode<int>* root=new TreeNode<int>(rootdata);
//     queue<TreeNode<int>*>pendingNodes;
//     pendingNodes.push(root);
//     while(pendingNodes.size()!=0){
//         TreeNode<int>* front=pendingNodes.front();
//         pendingNodes.pop();
//          cout<<front->data<<endl;
//         int numchild;
//         cin>>numchild;
//         for(int i=0; i<numchild; i++){
//             int childdata;
//             cout<<front->data<<endl;
//             cin>>childdata;
//             TreeNode<int>* child=new TreeNode<int>(childdata);
//             front->children.push_back(child);
//             pendingNodes.push(child);
//         }
//     }
//     return root;
// }
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
TreeNode<int>* takeInputLevelwise(){
    int rootdata;
    cout<<"Enter data"<<endl;
    cin>>rootdata;
    TreeNode<int>* root=new TreeNode<int>(rootdata);
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<endl;
        int numchild;
        cout<<"NO of child of "<<front->data<<": "<<endl;
        cin>>numchild;
        for(int i=0; i<numchild; i++){
            int childdata;
            // cout<<front->data<<endl;
            cin>>childdata;
            TreeNode<int>* child=new TreeNode<int>(childdata);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
int main(){
    // TreeNode<int> *root=takeinput();
    // printTree(root);
    TreeNode<int> *root=takeInputLevelwise();
    printTree(root);
    return 0;
}
// 10:5 , 4 ,
// 5:8 , 7 ,
// 8:
// 7:
// 4:3 ,
// 3: