//Return all the connected components
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#include<vector>
void printDFS(vector<vector<int>>&edges, int n, int sv, vector<int>&visited,vector<int> &v){
	visited[sv]=true;
    v.push_back(sv);
	for(int i=0;i<n;i++){
		if(edges[sv][i]==1){
			if(visited[i]){
				continue;
			}
			if(i==sv){
				continue;
			}
			printDFS(edges, n, i, visited,v);  
		}
	}
}
void DFS(vector<vector<int>>&edges,int n){
    vector<vector<int>>result;
	vector<int>visited(n);
	for(int i=0;i<n;i++){
		visited[i]=false;
	}
	for(int i=0;i<n;i++){
		if(!visited[i]){    
            vector<int> answer;
			printDFS(edges, n, i, visited,answer);
            result.push_back(answer);
		}
	}
    for(int i=0;i<result.size();i++){
        sort(result[i].begin(), result[i].end());
        for(int j=0;j<result[i].size();j++){
            cout<<result[i].at(j)<<" ";
        }
        cout<<endl;
	}
}
int main()
{
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
	// vector<int>visited(n);
    // for(int i=0;i<n;i++){
    //     visited[i]=false;
    // }   
	DFS(edges, n); //edges matrix, no. of vertices, starting vertex, visited nodes array
  	return 0;
}
// 8
// 5
// 1 3
// 3 4
// 2 5
// 2 7
// 6 0
// 0 6
// 1 3 4
// 2 5 7