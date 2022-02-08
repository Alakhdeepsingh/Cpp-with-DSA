// Running Median
#include<queue>
using namespace std;
#include<bits/stdc++.h>
void findMedian(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output as specified in the question.
     */
    priority_queue<int, vector<int>, greater<int>> min;
    priority_queue<int> max;
    
    for(int i=0;i<n;i++){
        if(min.empty() && max.empty()){
            max.push(arr[i]);
            cout<<arr[i]<<endl;
        }else{
                if(arr[i]>max.top()){
                    min.push(arr[i]);
                    if(min.size()-max.size()>1){
                        max.push(min.top());
                        min.pop();
                    }
                    if((max.size()+min.size())%2!=0){
                        if(max.size()>min.size()){
                            cout<<max.top()<<endl;
                        }else{
                            cout<<min.top()<<endl;
                        }       
                    }else{
                            cout<<(min.top()+max.top())/2<<endl;
                    }                   
                } 
                else{
                    max.push(arr[i]);
                    if(max.size()-min.size()>1){
                        min.push(max.top());
                        max.pop();
                    }
                       if((max.size()+min.size())%2!=0){
                           if(max.size()>min.size()){
                            cout<<max.top()<<endl;
                        }else{
                            cout<<min.top()<<endl;
                        }
                        }else{
                            cout<<int((min.top()+max.top())/2)<<endl;
                        }
                 }
                
            }
            
            
        }
        
        
        
    
    
    

}
