//Is connected using vector
#include <bits/stdc++.h>
using namespace std;
void printDFS(vector<vector<int>>&edges, int n, int sv, vector<int>&visited){
    // cout<<sv<<endl;
    visited[sv]=true;
    
    for(int i=0;i<n;i++){
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }            
            if(i==sv){
                continue;
            }
            printDFS(edges, n, i, visited);
        }
    }
}
int isConnected(vector<vector<int>>&edges, int n){
    vector<int>visited(n);
    for(int i=0;i<n;i++){
        visited[i]=false;
    }   
    printDFS(edges, n, 0, visited); 
    for(int i=0;i<n;i++){
        if(visited[i]==false){
            return 0;
        }
    }
    return 1;
}
int main() {
    int n; //no. of vertices
    int e;// no. of edges
    
    cin>>n>>e;
    vector<vector<int>>edges(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int f,s;
        // cout<<"Enter the first starting vertex and enter the ending vertex for an edge:"<<endl;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;   
    }
    int y=isConnected(edges, n); //edges matrix, no. of vertices, starting vertex, visited nodes array
    if(y==1){
        cout<<"true";
    }else{
        cout<<"false";
    }
  return 0;
}
// 8
// 6
// 0 2
// 0 1
// 1 3
// 3 4
// 5 7
// 5 6
// false

// 4
// 3
// 0 1
// 1 2
// 2 3
// true
