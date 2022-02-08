//Root to Node Path in Binary Tree
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
    bool isBST(BinaryTreeNode<int>* root, int min, int max){
	    if(root==NULL){
		    return true;
	    }
	
	    if(root->data<min || root->data>max){
		    return false;
	    }
	
	    bool isLeftOk=isBST(root->left, min, root->data-1);
	    bool isRightOk=isBST(root->right, root->data, max);
	
	    return isLeftOk && isRightOk;
    }
    
    int height(BinaryTreeNode<int>* root){
        if(root==NULL){
            return 0;
        }
        int h1=0, h2=0;
        if(root->left!=NULL){
            h1=height(root->left);

        }
        if(root->right!=NULL){
          h2=height(root->right);
        }
          
        
        return max(h1, h2)+1;
    }  
//     }
// int largestBST(BinaryTreeNode<int>* root){
//     if(root==NULL){
//         return 0;
//     }
//     else{
//         if(isBST (root,INT_MIN,INT_MAX)){
//             return height(root);
//         }
//         else{
//             return max(largestBST(root->left),largestBST(root->right));
//         }
//     }

// }
// BinaryTreeNode<int>* search(BinaryTreeNode<int>* root, int a){
//     if(root==NULL){ 
//         return NULL;
//     }
// }
// void replacenodes(BinaryTreeNode<int>* root,int* sum){
//     if(root==NULL){ 
//         return;
//     }
//     replacenodes (root->right,sum);
//     *sum=*sum + root->data;
//     root->data=*sum;
//     replacenodes (root->left,sum);
// }
// void replace(BinaryTreeNode<int>* root){
//     if(root==NULL){
//         return;
//     }
//     else{
//         int sum = 0;
//         replacenodes(root,&sum);
//     }
// }
int main()
{
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
    replace(root);
    cout<<root->data<<endl;
    printTree(root);

    
    return 0;
}
























































































































// Enter root data
// 10
// Enter root data
// 8
// Enter root data
// 6
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
// 20
// Enter root data
// 18
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// 24
// Enter root data
// 22
// Enter root data
// -1
// Enter root data
// -1
// Enter root data
// -1
// 10:L8R20
// 8:L6R9
// 6:
// 9:
// 20:L18R24
// 18:
// 24:L22
// 22:
// 4