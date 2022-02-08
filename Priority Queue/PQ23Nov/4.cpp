// Code : K smallest Elements
#include<bits/stdc++.h>
using namespace std;
vector<int> kSmallest(vector<int>&input, int n, int k) {
	// Write your code here
    priority_queue<int> pq;
    for(int i=0;i<k;i++){
        pq.push(input[i]);
    }
    for(int i=k;i<n;i++){
        if(input[i]<pq.top()){
            pq.pop();
            pq.push(input[i]);
        }else{
            continue;
        }
    }
    vector<int> v;
    while(!pq.empty()){
        v.push_back(pq.top());
        pq.pop();
    }
    return v;   
}
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>d= kSmallest(v,n,k);
    for(int i=0; i<d.size(); i++){
        cout<<d[i]<<" ";
    }
}
// 7
// 3
// 5 6 9 12 3 13 2
// 5 3 2