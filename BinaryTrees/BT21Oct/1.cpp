//Print Binary Tree using Queue
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class BinaryTreeNode{
    public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
    BinaryTreeNode(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
BinaryTreeNode<int>* takeinputlevelwise(){
    int rootdata;
    cout<<"Enter root data"<<endl;
    cin>>rootdata;
    if(rootdata==-1){
        return NULL;
    }
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootdata);
    queue<BinaryTreeNode<int>*>pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0){
        BinaryTreeNode<int>* front=pendingnodes.front();
        pendingnodes.pop();
        cout<<"Enter left child of"<<front->data<<endl;
        int leftchilddata;
        cin>>leftchilddata;
        if(leftchilddata!=-1){
            BinaryTreeNode<int>* child=new BinaryTreeNode<int>(leftchilddata);        
            front->left=child;
            pendingnodes.push(child);
        }
        cout<<"Enter right child of"<<front->data<<endl;
        int rightchilddata;
        cin>>rightchilddata;
        if(rightchilddata!=-1){
            BinaryTreeNode<int>* child=new BinaryTreeNode<int>(rightchilddata);        
            front->right=child;
            pendingnodes.push(child);
        }
    }
    return root;
}
void printTree(BinaryTreeNode<int> *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left!=NULL){
        cout<<"L"<<root->left->data<<" ";
    }
    if(root->right!=NULL){
        cout<<"R"<<root->right->data<<endl;
    }
    else{
        cout<<endl;
    }
    printTree(root->left);
    printTree(root->right);
}
int main()
{
    BinaryTreeNode<int>* root = takeinputlevelwise();
    printTree(root);
    return 0;
}
// Enter root data
// 1
// Enter left child of1
// 2
// Enter right child of1
// 3
// Enter left child of2
// 4
// Enter right child of2
// 5
// Enter left child of3
// 6
// Enter right child of3
// 7
// Enter left child of4
// -1
// Enter right child of4
// -1
// Enter left child of5
// -1
// Enter right child of5
// -1
// Enter left child of6
// -1
// Enter right child of6
// -1
// Enter left child of7
// -1
// Enter right child of7
// -1
// 1:L2 R3
// 2:L4 R5
// 4:
// 5:
// 3:L6 R7
// 6:
// 7: