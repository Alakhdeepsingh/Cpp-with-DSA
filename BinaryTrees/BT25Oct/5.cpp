//ZIG ZAG TREE
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
    BinaryTreeNode<int>* zigzag(BinaryTreeNode<int>* root){
        queue<BinaryTreeNode<int>*>pendingnodes;
        int cnt=0;
        pendingnodes.push(root);
        cout<<root->data<<endl;
        cnt++;
        while(pendingnodes.empty()!=1){
            if(cnt%2==1){
                stack<int>s;
                int x=pendingnodes.size();
                for(int i=0; i<x; i++){
                    BinaryTreeNode<int>* front=pendingnodes.front();
                    pendingnodes.pop();
                    if(front->left!=NULL){
                        //cout<<front->left->data<<" ";
                        s.push(front->left->data);
    
                        pendingnodes.push(front->left);
                    }
                    if(front->right!=NULL){
                        // cout<<front->right->data<<" ";
                        s.push(front->right->data);
                        pendingnodes.push(front->right);
                    }  
                }
                while(!s.empty()){
                    cout<<s.top()<<" ";
                    s.pop();
                }
                cout<<endl;
                cnt++;
            }
            else{
            int x=pendingnodes.size();
            for(int i=0; i<x; i++){
                BinaryTreeNode<int>* front=pendingnodes.front();
                pendingnodes.pop();
                if(front->left!=NULL){
                    cout<<front->left->data<<" ";
                    pendingnodes.push(front->left);
                }
                if(front->right!=NULL){
                    cout<<front->right->data<<" ";
                    pendingnodes.push(front->right);
                }
            }
            cout<<endl;
            cnt++;
            }
        }
    }
int main()
{
    BinaryTreeNode<int>* root = takeinputlevelwise();
    printTree(root);
    zigzag(root);
    return 0;
}
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
// 8
// Enter right child of5
// -1
// Enter left child of6
// -1
// Enter right child of6
// 9
// Enter left child of7
// -1
// Enter right child of7
// -1
// Enter left child of8
// -1
// Enter right child of8
// -1
// Enter left child of9
// 10
// Enter right child of9
// -1
// Enter left child of10
// -1
// Enter right child of10
// -1
// 1:L2 R3
// 2:L4 R5
// 4:
// 5:L8
// 8:
// 3:L6 R7
// 6:R9
// 9:L10
// 10:
// 7:
// 1
// 3 2
// 4 5 6 7
// 9 8
// 10
