//GET PATH - DFS using vector
#include <iostream>
using namespace std;
#include<vector>
void getPath(vector<vector<int>>&edges, int n, int v1, int v2, vector<int>&visited, vector<int> &v){
    if(v1==v2){
        v.push_back(v2);
        return;  
    }
    visited[v1]=true;
    for(int i=0;i<n;i++){
        if(edges[v1][i]==1){
            if(visited[i]){
                continue;
            }
            if(i==v1){
                continue;
            }
            getPath(edges, n, i, v2, visited, v);
            if(v.size()>0){    
                v.push_back(v1);
                return;
            }
        }
    }
}
int main()
{
  int V, E, tempX, tempY;
  cin >> V >> E;
    vector<vector<int>>edges(V,vector<int>(V));
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            edges[i][j]=0;
        }
    }
    for(int i=0;i<E;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    vector<int>visited(V);
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    vector<int> s1;
    int v1, v2;
    cin>>v1>>v2;
    getPath(edges, V, v1, v2, visited, s1);
    for(int i=0;i<s1.size();i++){
        cout<<s1[i]<<" ";
    }
  return 0;
}
// 4
// 3
// 0 1
// 1 3
// 3 2
// 0 3
// 3 1 0


// 7
// 6
// 0 1
// 1 2
// 2 5
// 5 6
// 2 3
// 3 4
// 0 6
// 6 5 2 1 0


