//Prim's Algorithm using vector
#include<bits/stdc++.h>
using namespace std;
int findMinVertex( vector<int>&weights, vector<int>&visited , int n){
    int minVertex =-1;
    for(int i=0; i< n; i++){
        if(!visited[i] && (minVertex == -1 || weights[i] < weights[minVertex])){
            minVertex=i;
        }
    }
    return minVertex;
}
void prims(vector<vector<int>>& edges,int n){
     vector<int>parent(n);  //vector<int>(n));
    //int* parent = new int[n];
     vector<int>weight(n);
    //int* weight = new int[n];
     vector<int>visited(n);
    //bool* visited = new bool[n];

    for(int i = 0; i < n; i++){
        visited[i] = false;
        weight[i]=INT_MAX;
    }
    parent[0]=-1;
    weight[0]=0;
    for(int i = 0; i < n; i++){
        int minVertex=findMinVertex(weight,visited,n);
        visited[minVertex]=true;
        for(int j=0; j< n; j++){
            if(edges[minVertex][j]!=0 && !visited[j]){
                if(edges[minVertex][j]<weight[j]){
                    weight[j]=edges[minVertex][j];
                    parent[j]=minVertex;
                }
            }
        }
    }
    for(int i=1; i< n; i++){
        if(parent[i]<i){
            cout<<parent[i]<<" "<<i<<" "<<weight[i]<<endl;
        }
        else{
            cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;
        }
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    // int **edges=new int*[n];
    vector<vector<int>>edges(n,vector<int>(n));
    for(int i=0;i<n;i++){
    //     edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
    
    for(int i=0;i<e;i++){
        int f,s,weight;
        cin>>f>>s>>weight;
        edges[f][s]=weight;
        edges[s][f]=weight;    
    }
    vector<int>visited(n);
    for(int i=0; i<n; i++){
        visited[i]=false;
    }
    cout<<endl;
    prims(edges,n);    

    return 0;
}
// 5 7
// 0 1 4
// 0 2 8
// 1 3 6
// 1 2 2
// 2 3 3
// 2 4 9
// 3 4 5

// 0 1 4
// 1 2 2
// 2 3 3
// 3 4 5
