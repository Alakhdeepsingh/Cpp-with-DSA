//BFS DFS for disconnected graph using vector
#include<bits/stdc++.h>
using namespace std;
void printDFS(vector<vector<int>>&edges,int n,int sv,vector<int>&visited){
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
            printDFS(edges,n,i,visited);
        }
    }
}
void printBFS(vector<vector<int>>&edges,int n, int sv,vector<int>&visited){
    queue<int> pendingvertices;
    pendingvertices.push(sv);
    visited[sv] = true;
    while(!pendingvertices.empty()){
        int currentVertex=pendingvertices.front();
        pendingvertices.pop();
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
}
void BFS(vector<vector<int>>&edges,int n){
    vector<int>visited(n,false);
    for(int i=0; i<n; i++){
        if(!visited[i])
           printBFS(edges,n,i,visited);
    }
}
void DFS(vector<vector<int>>&edges,int n){
    vector<int>visited(n,false);
    for(int i=0; i<n; i++){
        if(!visited[i])
           printDFS(edges,n,i,visited);
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
        cin>>f>>s;
        edges[s][f]=1;
        edges[f][s]=1;
    }
    cout<<"DFS"<<endl;
    DFS(edges,n);

    cout<<"BFS"<<endl;
    BFS(edges,n);
    return 0;
}
// 7
// 5
// 0 2
// 0 3
// 2 3
// 1 4
// 5 6
// DFS
// 0
// 2
// 3
// 1
// 4
// 5
// 6
// BFS
// 0
// 2
// 3
// 1
// 4
// 5
// 6





// #include<bits/stdc++.h>
// using namespace std;
// void printDFS(vector<vector<int>>&edges,int n,int sv,vector<int>&visited){
//     cout<<sv<<endl;
//     visited[sv]=true;
//     for(int i=0; i<n; i++){
//         if(i==sv){
//             continue;
//         }
//         if(edges[sv][i]==1){
//             if(visited[i]){
//                 continue;
//             }
//             printDFS(edges,n,i,visited);
//         }
//     }
// }
// void printBFS(vector<vector<int>>&edges,int n, int sv,vector<int>&visited){
//     queue<int> pendingvertices;
//     pendingvertices.push(sv);
//     visited[sv] = true;
//     while(!pendingvertices.empty()){
//         int currentVertex=pendingvertices.front();
//         pendingvertices.pop();
//         cout<<currentVertex<<endl;
//         for(int i=0; i<n; i++){
//             if(i==currentVertex){
//                 continue;
//             }
//             if(edges[currentVertex][i]==1 && !visited[i]){
//                 pendingvertices.push(i);
//                 visited[i] = true;
//             }
//         }
//     }
// }
// void BFS(vector<vector<int>>&edges,int n){
//     vector<int>visited(n,false);
//     for(int i=0; i<n; i++){
//         if(!visited[i])
//            printBFS(edges,n,i,visited);
//     }
// }
// void DFS(vector<vector<int>>&edges,int n){
//     vector<int>visited(n,false);
//     for(int i=0; i<n; i++){
//         if(!visited[i])
//            printDFS(edges,n,i,visited);
//     }
// }
// int main(){
//     int n,e;
//     cin>>n>>e;
//     vector<vector<int>>edges(n,vector<int>(n));
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             edges[i][j]=0;
//         }
//     }
//     for(int i=0; i<n; i++){
//         int f,s;
//         cin>>f>>s;
//         edges[s][f]=1;
//         edges[f][s]=1;
//     }
//     cout<<"DFS"<<endl;
//     DFS(edges,n);

//     cout<<"BFS"<<endl;
//     BFS(edges,n);
//     return 0;
// }
// // 7
// // 5
// // 0 2
// // 0 3
// // 2 3
// // 1 4
// // 5 6
// // DFS
// // 0
// // 2
// // 3
// // 1
// // 4
// // 5
// // 6
// // BFS
// // 0
// // 2
// // 3
// // 1
// // 4
// // 5
// // 6