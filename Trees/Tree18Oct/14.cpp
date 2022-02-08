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
TreeNode<int>*temp=NULL;

TreeNode<int>* takeinput() {
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

void printTree(TreeNode<int>* root) {
    if(root==NULL){
        return;
    }
    
    cout<<root->data<<":";
    
    for(int i=0; i<root->children.size(); i++) {
        cout<<root->children[i]->data<<" , ";
    }
    
    cout<<endl;
    
    for(int i=0; i<root->children.size(); i++) {
        printTree(root->children[i]);
    }
}
void larger(TreeNode<int>* root,int x ) {
    if(root==NULL){
        return;
    }
    else{
        if(root->data>x){
	        if(temp==NULL){
	            temp=root;
	        } else if(temp->data>root->data){
	                temp=root;
	        }
	    }
	    for(int i=0; i<root->children.size(); i++){
	        larger(root->children[i],x);
	    } 
    }
}
void NextLarger(TreeNode<int>* root,int x){ 
    larger(root,x);
    return;
}
int main(){
	TreeNode<int> *root=takeinput();
	printTree(root);
	int x;
	cin>>x;
	NextLarger(root,x);
	cout<<temp->data<<endl;
   return 0;
}
// Enter data
// 10
// Enter number of children of10
// 3
// Enter data
// 5
// Enter number of children of5
// 2
// Enter data
// 9
// Enter number of children of9
// 0
// Enter data
// 8
// Enter number of children of8
// 0
// Enter data
// 6
// Enter number of children of6
// 2
// Enter data
// 100
// Enter number of children of100
// 0
// Enter data
// 3
// Enter number of children of3
// 0
// Enter data
// 12
// Enter number of children of12
// 0
// 10:5 , 6 , 12 , 
// 5:9 , 8 ,
// 9:
// 8:
// 100:
// 3:
// 12:
// 10
// 12