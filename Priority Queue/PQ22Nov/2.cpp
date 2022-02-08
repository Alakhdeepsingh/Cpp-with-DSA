//Implementation of priority queue
#include<bits/stdc++.h>
using namespace std;
class priorityqueue{
    vector<int>pq;
    public:

    priorityqueue(){ //constructor it will initialized pq

    }
    bool isEmpty(){
        return pq.size()==0;
    }
    //return the size of priorityqueue - no of elements present
    int getSize(){
        return pq.size();
    }
    int getMin(){
        if(isEmpty()){
            return 0; //Priority queue is empty
        }
        return pq[0];
    }
void insert(int element){
    pq.push_back(element);
    int childindex=pq.size-1;

    while(childindex>0){
        int parentindex=(childindex-1)/2;

        if(pq[childindex]<pq[parentindex]){
        int temp =pq[parentindex];
        pq[childindex]=pq[parentindex];
        pq[parentindex]=temp;
        }
    else{
        break;
    }
    childindex=parentindex;
    }
}
int removeMin(){
    if(isEmpty()){
        return 0;
    }
    int ans=pq[0];
    pq[0]=pq[pq.size()-1];
    pq.pop_back();

    //downheapify
    int parentindex=0;
    int leftchild=2*parentindex+1;
    int rightindex=2*parentindex+2;
    while(leftchildindex < pq.size()){
        int minindex=parentindex;
        if(pq[minindex]>pq[leftchildindex]){
            minindex=leftchildindex;
        }
        if(rightchildindex<pq.size() && pq[rightchildindex]<pq[minindex]){
            minindex=rightchildindex;
        }
        if(minindex==parentindex){
            break;
        }
        int temp=pq[minindex];
        pq[minindex]=pq[parentindex];
        pq[parentindex]=temp;

        parentindex=minindex;
        leftchildindex=2*parentindex+1;
        rightchildindex=2*parentindex+2;
    }
    return ans;
}
};
int main()
{
    priorityqueue p;
    p.insert(100);
    p.insert(10);
    p.insert(15);
    p.insert(4);
    p.insert(17);
    p.insert(67);

    cout<<p.getSize()<<endl;
    cout<<p.getMin()<<endl;

    while(!p.isEmpty()){
        cout<<p.removeMin()<<" ";
    }
    cout<<endl;
    return 0;
}
//heapsort 
//TC : n log n + n log n = O(n log n)
//SC : n  = O (n)
