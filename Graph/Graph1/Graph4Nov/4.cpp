//Print Graph using BFS using vector
#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>>&edges,int n,int sv,vector<int>&visited){
    cout<<sv<<endl;
    visited[sv]=true;
    for(int i=0; i<n; i++){
        if(i==sv){
            continue;
        }
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }
            print(edges,n,i,visited);
        }
    }
}
void printBFS(vector<vector<int>>&edges,int n, int sv){
    queue<int>pendingvertices;
    vector<bool>visited(n);
    for(int i=0; i<n; i++){
        visited[i] = false;
    }
    pendingvertices.push(sv);
    visited[sv] = true;
    while(!pendingvertices.empty()){
        int currentVertex=pendingvertices.front();
        pendingvertices.pop();
        cout<<currentVertex<<endl;
        for(int i=0; i<n; i++){
            if(i==currentVertex){
                continue;
            }
            if(edges[currentVertex][i]==1 && !visited[i]){
                pendingvertices.push(i);
                visited[i] = true;
            }
        }
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    vector<vector<int>>edges(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            edges[i][j]=0;
        }
    }
    for(int i=0; i<n; i++){
        int f,s;
        cin>>f>>s;
        edges[s][f]=1;
        edges[f][s]=1;
    }
    vector<int>visited(n);
    for(int i=0; i<n; i++){
        visited[i]=false;
    }
    cout<<"DFS"<<endl;
    print(edges,n,0,visited);

    cout<<"BFS"<<endl;
    printBFS(edges,n,0);
    return 0;
}
// 8 
// 9
// 0 4 
// 0 5
// 4 3
// 3 2
// 2 1
// 1 3
// 5 6
// 3 6
// 6 7
// DFS
// 0
// 4
// 3
// 1
// 2
// 6
// 5
// 7
// BFS
// 0
// 4
// 5
// 3
// 6
// 1
// 2
// 7


// 4
// 3
// 0 2
// 0 3
// 3 1
// 2 1
// DFS
// 0
// 2
// 1
// 3
// BFS
// 0
// 2
// 3
// 1