//GET PATH - BFS
#include <iostream>
using namespace std;
#include<vector>
#include<queue>
#include<map>

int present=0;
map<int, int> bfs(int **edges, int n, int v1, int v2, bool *visited, vector<int> &v){
//     if(v1==v2){
//         vector<int> v;
//         v.push_back(v2);
        
//     }
    
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
            if(i==v1){
                continue;
            }
            
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
  

  /*

  	   Write Your Code Here
	   Complete the Rest of the Program
	   You have to Print the output yourself
	 
  */
    
    int n,e;
    cin>>n>>e;
    
    int **edges=new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        
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
    
    bool *visited=new bool[n];
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
