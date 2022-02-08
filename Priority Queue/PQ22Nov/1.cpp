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
    int getsize(){
        return pq.size();
    }
    int getmin(){
        if(isEmpty()){
            return 0; //Priority queue is empty
        }
        return pq[0];
    }
}
int main()
{
    
    return 0;
}

