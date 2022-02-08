//Longest Consecutive Sequence
#include <unordered_map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int longestConsecutiveIncreasingSequence(vector<int>&v, int n){
    int ans=INT_MIN;
    unordered_map <int, bool>sequence;
    for(int i = 0; i < n; i++){
        sequence[v[i]]=true;
    }    
    for(int i = 0; i < n; i++){
        if(sequence[v[i]-1]==false){
            int x=v[i];
            while(sequence[x]==true){
                x++;
            }
            ans=max(ans,x-v[i]);
        }
    }
return ans;
}
int main(){
    int d;
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    d=longestConsecutiveIncreasingSequence(a,n);
    cout<<d<<endl;
}
// 10
// 9 1 8 6 3 4 2 7 10 15
// 5
    




































    
// unordered_map <int, bool> visitedElements ;
// unordered_map <int, int> elementToIndexMapping;
//         for(int i = 0; i < n; i++){
//     elementToIndexMapping[arr[i]] = i;
//      if(visitedElements.count(arr[i]) == 0){
//        visitedElements[arr[i]] = true;
//        }
//      }
// vector<int> longestSequence;
// int globalMaxSequenceLength = 1;
// int globalMinStartIndex = 0;
//        for(int i = 0; i < n; i++){
//      int num = arr[i];
//      int currentMinStartIndex = i;
//      int count = 0;
//       int tempNum = num;
// //Forward
//       while(visitedElements.count(tempNum) == 1 && visitedElements[tempNum] == true){
//         visitedElements[tempNum] = false;
//            count++;
//           tempNum++;
//          }
// //Backward
// tempNum = num-1;
//      while(visitedElements.count(tempNum) == 1 && visitedElements[tempNum] == true){
//       visitedElements[tempNum] = false;
//        count++;
//       currentMinStartIndex = elementToIndexMapping[tempNum];
//       tempNum--;
//      }
// if(count > globalMaxSequenceLength){
//    globalMaxSequenceLength = count;
//   globalMinStartIndex = currentMinStartIndex;
// } 
//     else if(count == globalMaxSequenceLength) {
//    if(currentMinStartIndex < globalMinStartIndex) {
//       globalMinStartIndex = currentMinStartIndex;
//     }
//   }
// }
// int globalStartNum = arr[globalMinStartIndex];
// longestSequence.push_back(globalStartNum);

// globalMaxSequenceLength--;
// while(globalMaxSequenceLength != 0){
// globalStartNum++;
// longestSequence.push_back(globalStartNum);
// globalMaxSequenceLength--;
// }
// return longestSequence;
// }


// #include <vector>
// #include<unordered_map>
// using namespace std;
//  vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){
// // 	//Your Code goes here
//     unordered_map<int, bool> map;
//     int startIndex;
//     int count1=0, count2=0;
//     int maxLength;
//     for(int i=0;i<n;i++){
//         map[arr[i]]=true;
//     }
    
//     for(int i=0;i<n && map[arr[i]]==true;i++){
        
//         for(int j=0;j<n && map[arr[i]]==true;j++){
//             if(map.count(input[i]+1)!=0){
//                 count1++;
//             }
//         }
        
        
//         for(int j=n;j>0 && map[arr[i]]==true;j--){
//             if(map.count(input[i]-1)!=0){
//                 count2++;
//             }
//         }
        
//         if(maxLength<(count1+count2)){
//             maxLength=count1+count2;
//         }
//         r
        
        
        
        
// //     }
    
    
    
// // }
