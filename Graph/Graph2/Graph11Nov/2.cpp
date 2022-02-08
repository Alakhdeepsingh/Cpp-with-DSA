//Islands using vector

#include<bits/stdc++.h>
using namespace std;
void  dfs(vector<vector<int>>&edges,int n, vector<int>&visited, int sv){
    // cout<<sv<<endl;
    visited[sv]=true;   
    for(int i=1;i<=n;i++){
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }       
            if(i==sv){
                continue;
            }
            dfs(edges, n, visited, i);
        }
    }   
}
int countOfIslands(vector<vector<int>>&edges, int n){
    
    //bool *visited=new bool[n];
    vector<int>visited(n);
    for(int i=1;i<=n;i++){
        visited[i]=false;
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dfs(edges, n, visited, i);
            count++;
        }
    }
    return count;   
}
int solve(int n,int m,vector<int>u,vector<int>v)
{
    //int *edges=new int[n];
    vector<vector<int>>edges(n,vector<int>(n));
    for(int i=1;i<=n;i++){
        //edges[i]=new int[n];
        for(int j=1;j<=n;j++){
            edges[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        edges[u[i]][v[i]]=1;
        edges[v[i]][u[i]]=1;
    }
    return countOfIslands(edges, n);
}
int main(){
    int n,m;
    vector<int>u;
    vector<int>v;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        u.push_back(x);
        v.push_back(y);
    }
    int d = solve(n,m,u,v)
    return 0;
}
// void  dfs(int **edges, int n, bool* &visited, int sv){
//     // cout<<sv<<endl;
// 	visited[sv]=true;	
// 	for(int i=1;i<=n;i++){
// 		if(edges[sv][i]==1){
// 			if(visited[i]){
// 				continue;
// 			}		
// 			if(i==sv){
// 				continue;
// 			}
// 			dfs(edges, n, visited, i);
// 		}
// 	}   
// }
// int countOfIslands(int **edges, int n){
    
//     bool *visited=new bool[n];
//     for(int i=1;i<=n;i++){
//         visited[i]=false;
//     }
//     int count=0;
//     for(int i=1;i<=n;i++){
//         if(!visited[i]){
//             dfs(edges, n, visited, i);
//             count++;
//         }
//     }
//     return count;   
// }
// int solve(int n,int m,vector<int>u,vector<int>v)
// {
//     int **edges=new int*[n];
//     for(int i=1;i<=n;i++){
//         edges[i]=new int[n];
//         for(int j=1;j<=n;j++){
//             edges[i][j]=0;
//         }
//     }
//     for(int i=0;i<m;i++){
//         edges[u[i]][v[i]]=1;
//         edges[v[i]][u[i]]=1;
//     }
//     return countOfIslands(edges, n);
// }
