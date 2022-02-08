#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next; 
    node (int x){ 
        this->data=x;
        next=NULL; 
    }
};                
    int main(){
        node n1(1);
        node *head =&n1;
        node n2(2);
        n1.next=&n2;
        cout<<n1.data<<" "<<n2.data;
        return 0;
    }
// 1 2 