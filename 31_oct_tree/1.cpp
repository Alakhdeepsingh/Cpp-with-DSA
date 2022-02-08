#include<bits/stdc++.h>
using namespace std;
// void searchNode(BinaryTreeNode* root, int val) {
//     if(root == NULL){
//         return;
//     }
//     if(val==root->data){
//       cout<<"YES"<<endl;  
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
//     searchNode(root->left,val);
//     searchNode(root->right,val);
// }

void countTotalNumberOfNode(Node* node) {
    if(root==NULL) {
        return;
    }
    int ans=1;
    int d=ans+countTotalNumberOfNode(root->left)+countTotalNumberOfNode(root->right);
    cout<<d<<endl;
}
int main()
{

    return 0;
}
// void countTotalNumberOfNode(Node* node) {

// }
// ..
// .
// ..
// .
// int getTotal(Node* root) {

// }
// void countTotalNumberOfNode(Node* node) {
//     cout << getTotal(node);
// }

