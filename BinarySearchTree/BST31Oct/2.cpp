//BST Class - How to insert and delete
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
class BST{
    BinaryTreeNode<int>*root;
    public:
    BST(){
        root=NULL;
    }
    ~BST(){
        delete root;
    }
    void deletedata(int data){
        if(data>node->data){
            node->right=deleteData(data,node->right);
        }
        else if(data<node->data){
            node->left=deleteData(data,node->left);
        }
        else{
            if(node->left==NULL&&node->right==NULL){
                delete node;
                return NULL;
            }
            else if(node->left==NULL){
                BinaryTreeNode<int>* temp=node->right;
                node->right=NULL;
                delete node;
                return temp;
            }
             else if(node->right==NULL){
                BinaryTreeNode<int>* temp=node->left;
                node->left=NULL;
                delete node;
                return temp;
            }
            else{
                BinaryTreeNode<int>* temp=node->right;
                while(minNode->left!=NULL){
                    minNode=minNode->left;
                }
                int rightmin=minNode->data;
                node->data=rightMin;
                node->right=deleteData(rightMin,node->data);
                return node;
            }

        }
    }
    private:
    BinaryTreeNode<int>* insert(int data,BinaryTreeNode<int>* node) {
        if(node==NULL) {
            BinaryTreeNode<int>* newNode=new BinaryTreeNode<int>(data);
            return newNode;
        }
        if(data<node->data){
            node->left=insert(data,node->left);
        }
        else{
            node->left=insert(data,node->right);
        }
        return node;
    }
    void insert(int data){
        this->root=insert(data,this->root);
    }
    private:
    bool hasdata(int data,BinaryTreeNode<int>* node){
        if(node==NULL){
            return false;
        }
    }
    bool hasdata(int data){
        if(root==NULL){
            return false;
        }
        if(root->data==data){
            return true;
        }
        else if(data<root->data){
            return hasdata(data,root->left);
        }
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
int main()
{
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
    int a;
    cin>>a;
    BinaryTreeNode<int>* d=search(root,a);
    if(d==NULL){
        cout<<"NULL"<<endl;
    }
    else{
        cout<<d->data<<endl;
    }
    return 0;
}