//BFS USING ARRAY
#include<bits/stdc++.h>
using namespace std;
void print(int **edges,int n,int sv,bool* visited){
    cout<<sv<<endl;
    visited[sv]=true;
    for(int i=0; i<n; i++){
        if(i==sv){
            continue;
        }
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }
            print(edges,n,i,visited);
        }
    }
}
void printBFS(int** edges,int n, int sv){
    queue<int> pendingvertices;
    bool* visited = new bool[n];
    for(int i=0; i<n; i++){
        visited[i] = false;
    }
    pendingvertices.push(sv);
    visited[sv] = true;
    while(!pendingvertices.empty()){
        int currentVertex=pendingvertices.pop();
        cout<<currentVertex<<endl;
        for(int i=0; i<n; i++){
            if(i==currentVertex){
                continue;
            }
            if(edges[currentVertex][i]==1 && !visited[i]){
                pendingvertices.push(i);
                visited[i] = true;
            }
        }
    }
    deleted [] visited; 
}
int main(){
    int n,e;
    cin>>n>>e;
    int **edges=new int*[n]; //creating 2D array
    for(int i=0; i<n; i++){
        edges[i]=new int[n];
        for(int j=0; j<n; j++){
            edges[i][j]=0;
        }
    }
    for(int i=0; i<n; i++){
        int f,s;
        cin>>f>>s;
        edges[s][f]=1;
        edges[f][s]=1;
    }
    bool*visited=new bool[n];
    for(int i=0; i<n; i++){
        visited[i]=false;
    }
    cout<<"DFS"<<endl;
    print(edges,n,0,visited);

    cout<<"BFS"<<endl;
    printBFS(edges,n,0);

    delete [] visited;
    for(int i=0; i<n; i++){
        delete [] edges[i];
    }
    return 0;
}