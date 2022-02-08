// DFS USING VECTOR
#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>>&edges,int n,int sv,vector<bool>&visited){
    cout<<sv<<endl;
    visited[sv]=true;
    for(int i=0; i<n; i++){
        if(i==sv){
            continue;
        }         
        if(edges[sv][i]==1){
            if(visited[i]==true){
                continue;
            }
            print(edges,n,i,visited);
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
    for(int i=0; i<e; i++){
        int f,s;
        cin>>f>>s;  // 0 2  2 1  1 3
        edges[s][f]=1;
        edges[f][s]=1;
    }
    vector<bool>visited(n);
    for(int i=0; i<n; i++){
        visited[i]=false;
    }
    print(edges,n,0,visited);
    return 0;
}
// 4
// 3
// 0 2
// 2 1
// 1 3
// 0
// 2
// 1
// 3



