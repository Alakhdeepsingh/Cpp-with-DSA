//Largest Piece using array
#include<bits/stdc++.h>
using namespace std;
#define NMAX 51
void initialize(bool **visited, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            visited[i][j]=false;    
        }
    
    }    
}
void dfs(char cake[NMAX][NMAX], int n, bool **visited, int i, int j, int &k, char color){
    
    k++;
    visited[i][j]=true;
    
    if(j+1<n && cake[i][j+1]==color && !visited[i][j+1]){
        dfs(cake, n, visited, i, j+1, k, color);
    }
    
    if(i-1>=0 && cake[i-1][j]==color && !visited[i-1][j]){
        dfs(cake, n, visited, i-1, j, k, color);
    }
    
    if(i+1<n  && cake[i+1][j]==color && !visited[i+1][j]){
        dfs(cake, n, visited, i+1, j, k, color);
    }
   
    if(j-1>=0 && cake[i][j-1]==color && !visited[i][j-1]){
        dfs(cake, n, visited, i, j-1, k, color);
    }  
}
int solve(char board[][MAXN],int n, int m){
	// Write your code here.
    bool **visited=new bool*[n];
    for(int i=0;i<n;i++){
        visited[i]=new bool[n];
    }
    initialize(visited, n, m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int count=0;
            if(!visited[i][j]){
                char color=board[i][j];
                dfs(board, n, visited, i, j, count, color);
                if(count>4){
                    return 1;
                }   
                initialize(visited, n, m);
            }
        }
        
    }
    return 0;    
}
