#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next; 
    node (int x){ 
        (*this).data=x;
        next=NULL;
    }
};
    int main(){
    node *n3=new node(10);
    node (*head)=n3;
    node *n4=new node(20);
    node (*next)=n4;
      cout<<(*n3).data<<"  "<<(*n4).data;
            return 0;
    } 
// 10  20