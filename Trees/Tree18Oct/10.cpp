// //Next Larger 
// #include<bits/stdc++.h>
// using namespace std;
// template <typename T>
//  TreeNode<int>*temp=NULL;
// class TreeNode{
//     public:
//     int data;
//     vector<TreeNode<int>*>children;
//     TreeNode(T data){
//         this->data=data;

//     }
// };
//     TreeNode<int>* takeinput(){
//     int rootdata;
//     cout<<"Enter data"<<endl;
//     cin>>rootdata;
//     TreeNode<int>* root=new TreeNode<int>(rootdata);
//     int n;
//     cout<<"Enter number of children of"<<rootdata<<endl;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         TreeNode<int>* child = takeinput();
//         root->children.push_back(child);
//     }
//     return root;
// }
//     void printTree(TreeNode<int>* root){
//         if(root==NULL){
//             return;
//         }
//     cout<<root->data<<":";
//     for(int i=0; i<root->children.size(); i++){
//         cout<<root->children[i]->data<<" , ";
//     }
//     cout<<endl;
//     for(int i=0; i<root->children.size(); i++){
//         printTree(root->children[i]);
//     }
//     }
//     void larger(TreeNode<int>* root,int x ) {//,TreeNode<int>**temp){
//         if(root==NULL){
//             return;
//         }
//         else{
//             if(root->data>x){
//             if(*temp==NULL){
//                 *temp=root;
            
//             else{
//                 if(*temp->data>*root->data){
//                     *temp=root;
//                 }
//             }
//             }
//             for(int i=0; i<root->children.size(); i++){
//                 larger(root->children[i],x);//temp);
//             } 
//         }
//     }
//     TreeNode<int>* NextLarger(TreeNode<int>* root,int x){
//         // TreeNode<int>*temp=NULL;
//         larger(root,x);//&temp);
//         return temp;
//     }
// int main(){
// TreeNode<int> *root=takeinput();
// printTree(root);
// int x;
// cin>>x;
// TreeNode<int>*d= NextLarger(root,x);
// cout<<d->data<<endl;
//    return 0;
// }

//Next Larger 
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
    void larger(TreeNode<int>* root,int x ,TreeNode<int>**temp){
        if(root==NULL){
            return;
        }
        else{
            if(root->data>x){
            if(*temp==NULL){
                *temp=root;
            }
            else{
                if((*temp)->data>root->data){
                    *temp=root;
                }
            }
            }
            for(int i=0; i<root->children.size(); i++){
                larger(root->children[i],x,temp);
            } 
        }
    }
    TreeNode<int>* nextlarger(TreeNode<int>* root,int x){
        TreeNode<int>*temp=NULL;
        larger(root,x,&temp);
        return temp;

    }
    
     

int main(){
TreeNode<int> *root=takeinput();
int x;
cin>>x;
printTree(root);
TreeNode<int>*d= nextlarger(root,x);
cout<<d->data<<endl;
   return 0;
}