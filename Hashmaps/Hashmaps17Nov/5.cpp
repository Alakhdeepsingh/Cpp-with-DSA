//Longest subset zero sum
// #include<unordered_map>

// int lengthOfLongestSubsetWithZeroSum(int* arr, int size){
  
  // Write your code here
#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubsetWithZeroSum(vector<int>&arr, int size){
  
  // Write your code here
    if(size==1&&arr[0]==0)
        return 1;
    unordered_map<int, int> index;
    int sum=0;
    int maxlength=0;
    
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        if(i!=0){
            if(index[sum]!=0){    
                if(i-index[sum]>maxlength)
                    maxlength=i-index[sum];
               // continue;
            
            }else{
                index[sum]=i;    
            }
        }
        else{
            index[sum]=i;
        }
    }
    return maxlength;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int d=lengthOfLongestSubsetWithZeroSum(v,n);
    cout<<d<<endl;
}
// 9
// 6 3 -1 2 -4 3 1 -2 20
// 5
    
    
    
    
    
//     unordered_map<int, int> index;
//     int sum=0;
//     int maxLength;
    
//     for(int i=0;i<size;i++){
//         sum=sum+arr[i];
//         if(i!=0){
//             if(index[sum]!=0){
//                 maxLength=i+1;
//                 continue;
            
//             }else{
//                 index[sum]=i;    
//             }
            
//         }else{
//             index[sum]=i;
//         }
        
        
//     }

//     return maxLength;
// }


