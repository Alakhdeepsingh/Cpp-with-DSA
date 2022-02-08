// HAS PATH using Vector
#include <bits/stdc++.h>
using namespace std;
bool printDFS( vector<vector<int>>&edges, int n, int sv, vector<int>&visited, int v2){
    visited[sv]=true;
    if(edges[sv][v2]==1){
        return true;
    }
    for(int i=0;i<n;i++){ 
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }
            
            if(i==sv){
                continue;
            }
            if(printDFS(edges, n, i, visited, v2)){
                
                return true;
            }else{
                continue;
            }
        }
    }
    return false;
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
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;      
    }
    vector<int> visited(n);
    int v1, v2;
    cin>>v1>>v2;
    int x=printDFS(edges, n, v1, visited, v2);
    if(x==1){
        cout<<"true";
    }else{
        cout<<"false";
    }
  return 0;
}
// 4
// 3
// 0 1
// 1 2
// 2 3
// 0
// 3
// true

// 8
// 6
// 0 1
// 0 2
// 1 3
// 3 4
// 5 7
// 5 6
// 0 6
// false