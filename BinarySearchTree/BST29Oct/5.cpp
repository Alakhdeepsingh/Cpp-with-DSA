//Largest BST
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
    bool isBSTF(BinaryTreeNode<int>* root, int min, int max){
	    if(root==NULL){
		    return true;
	    }
	
	    if(root->data<min || root->data>max){
		    return false;
	    }
	
	    bool isLeftOk=isBSTF(root->left, min, root->data-1);
	    bool isRightOk=isBSTF(root->right, root->data, max);
	
	    return isLeftOk && isRightOk;
    }
    
    int heightOfTree(BinaryTreeNode<int>* root){
        if(root==NULL){
            return 0;
        }
        int h1=0, h2=0;
        if(root->left!=NULL){
            h1=heightOfTree(root->left);

        }
        if(root->right!=NULL){
          h2=heightOfTree(root->right);
        }
          
        
        return maxF(h1, h2)+1;
        
    }
    
    int maxNode(BinaryTreeNode<int>* root){
        if(root==NULL){
            return 0;
        }
        
        int maxLeft=0, maxRight=0;
        if(root->left!=NULL){
            maxLeft=maxNode(root->left);    
        }
        if(root->right!=NULL){
            maxRight=maxNode(root->right);
     
        }
              
        return maxF(root->data, maxF(maxLeft, maxRight));
        
    }
    int minNode(BinaryTreeNode<int>* root){
        if(root==NULL){
            return 0;
        }
        
        int minLeft=INT_MAX, minRight=INT_MAX;
        if(root->left!=NULL){
            minLeft=minNode(root->left);    
        }
        if(root->right!=NULL){
            minRight=minNode(root->right);
     
        }
              
        return minF(root->data, minF(minLeft, minRight));
        
    }
    
   
};
Helper largestBSTSubtree_helper(BinaryTreeNode<int> *root){
    if(root==NULL){
        Helper h;
        h.max=INT_MIN;
        h.min=INT_MAX;
        h.isBST=true;
        h.height=0;
        return h;
    }
    
    Helper h;
    h.max=h.maxNode(root);
    h.min=h.minNode(root);
    h.isBST=h.isBSTF(root, INT_MIN, INT_MAX);
    h.height=h.heightOfTree(root);
    if(h.isBST==true){
           return h;   
    }else{
        
         Helper hl, hr;
        if(root->left!=NULL){
            hl=largestBSTSubtree_helper(root->left);
        }
        if(root->right!=NULL){
             hr=largestBSTSubtree_helper(root->right);
        }
        
        if(hl.isBST==true && hr.isBST==true){
            Helper h;
            h.max=hr.max;
            h.min=hl.min;
            h.height=max(hl.height, hr.height);
            h.isBST=true;
            return h;
        
        }else if(hl.isBST==true && hr.isBST==false){
            return hl;
        
        }else if(hl.isBST==false && hr.isBST==true){
            return hr;
        
        }else{
            return h;
        //     Helper h;
        //     h.max=INT_MIN;
        //     h.min=INT_MAX;
        //     h.height=0;
        //     h.isBST=false;
        }
   
    }
     
    
}

int largestBSTSubtree(BinaryTreeNode<int> *root) {
    // Write your code here
    
    
    Helper h=largestBSTSubtree_helper(root);
    if(h.isBST==true){
        
        return h.height;
    }else{
        return -1;
    }
}

int main()
{
    BinaryTreeNode<int>* root=takeinput();
    printTree(root);
   
    return 0;
}