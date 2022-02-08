//GET PATH - BFS using vector
#include <iostream>
using namespace std;
#include<vector>
#include<queue>
#include<map>
int present=0;
map<int, int> bfs(vector<vector<int>>&edges, int n, int v1, int v2, vector<int>&visited, vector<int>&v){    
    queue<int> q;
    map<int, int> result;
    q.push(v1);
    visited[v1]=true;
    // v.push_back(v1);
    while(!q.empty()){
        int current=q.front();
        q.pop();
        if(current==v2){
            present=1;
            return result;
        }
        for(int i=0;i<n;i++){
                continue;
            }
             for(int i=0;i<n;i++){
            if(edges[current][i]==1 && !visited[i]){
                result.insert({i, current});
                q.push(i);
                visited[i]=true;
            }
        }
    }   
    return result;   
}
int main()
{
    int n,e;
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
    vector<int>visited(n);
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    int v1, v2;
    cin>>v1>>v2;
    vector<int> path;
    map<int, int> result=bfs(edges, n, v1, v2, visited, path);
    if(present==0){
        return 0;
    }
    int x=v2;
    vector<int> p;
    p.push_back(v2);
    while(x!=v1){
        int y=result[x];
        p.push_back(y);
        x=y;
    }
     for(int i=0;i<p.size();i++){
         cout<<p[i]<<" ";
     }
  return 0;
}
// 3
// 0 1
// 1 2
// 2 3
// 0 3
// 3 2 1 0

// 5
// 4
// 0 1
// 1 3
// 0 2
// 2 4
// 3 4
// 4 2 0 1 3

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
// 4 7
// 7 6 3 4