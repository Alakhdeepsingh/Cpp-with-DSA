// int subset(int input[], int n, int output[][20]) {
// // Write your code here


// }
#include<iostream>
using namespace std;

int subset(int input[], int n, int output[][20]) {
 // Write your code here
 if(n==0){
 output[0][0] = 0;
 return 1;
 }
 int num = input[0];
 int subsetsize = subset(input+1,n-1,output);

 for(int i = 0; i < subsetsize ; i++){
 int rowsize = output[i][0]+1;
 output[i+subsetsize][0] = rowsize;
 output[i+subsetsize][1] = num;

 for(int j = 1; j <= output[i][0]+1; j++){
 output[i+subsetsize][j+1] = output[i][j];
 }

 }
 return 2*subsetsize;
}
int main(){
    int n;
    cin>>n;
    int input[]={"1,2,3"};
    
}