//Dijkstra's algorithm using vector
#include<bits/stdc++.h>
using namespace std;
int findMinVertex(vector<int>&distance, vector<int>&visited , int n){
    int minVertex =-1;
    for(int i=0; i< n; i++){
        if(!visited[i] && (minVertex == -1 || distance[i] < distance[minVertex])){//int max<0
            minVertex=i;
        }
    }
    return minVertex;
}
void dijkstras(vector<vector<int>>&edges,int n){
    vector<int>distance(n);
    vector<int>visited(n);
    for(int i = 0; i < n; i++){
        distance[i]=INT_MAX;
        visited[i] = false;
    }
    distance[0]=0;
    for(int i = 0; i < n-1; i++){
        int minVertex=findMinVertex(distance,visited,n);
        visited[minVertex]=true; 
        for(int j=0; j< n; j++){
            if(edges[minVertex][j]!=0 && !visited[j]){
                int dist=distance[minVertex]+edges[minVertex][j];
                if(dist<distance[j]){
                    distance[j]=dist;
                }
            }
        }
    }
    for(int i=0; i< n; i++){
            cout<<i<<" "<<distance[i]<<endl;
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    vector<vector<int>>edges(n,vector<int>(n));
    for(int i=0;i<n;i++){
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
    // vector<int>visited(n);
    // //memset
    // for(int i=0; i<n; i++){
    //     visited[i]=false;
    //}
    cout<<endl;
    dijkstras(edges,n);    
    return 0;
}
// 5 7 
// 0 1 4
// 0 2 8 
// 1 3 5
// 1 2 2
// 2 3 5
// 2 4 9
// 3 4 4

// 0 0
// 1 4
// 2 6
// 3 9
// 4 13