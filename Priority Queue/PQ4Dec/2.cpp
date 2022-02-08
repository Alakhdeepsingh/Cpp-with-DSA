//Inbuild min Priority Queue
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;

    pq.push(16);
    pq.push(1);
    pq.push(167);
    pq.push(7);
    pq.push(45);
    pq.push(32);

    cout<<"size:"<<pq.size()<<endl;
    cout<<"top:"<<pq.top()<<endl;

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}
// size:6
// top:167
// 167
// 45
// 32
// 16
// 7
// 1
