// Merge K sorted arrays
#include<queue>
#include<vector>
vector<int> mergeKSortedArrays(vector<vector<int>*> input){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return the output.
     * Taking input and printing output is handled automatically.
     */
    
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<input.size();i++){
        vector<int> arr=*input[i];
        int n=arr.size();
        for(int j=0;j<n;j++){
            pq.push(arr[j]);
        }
    }
    vector<int> v;
    int ps=pq.size();
    for(int i=0;i<ps;i++){
        v.push_back(pq.top());
        pq.pop();
    }-
    return v;
}
