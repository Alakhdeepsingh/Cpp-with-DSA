// Buy the ticket

#include<queue>
int buyTicket (int *arr, int n, int k){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int t=0;
    queue<int> q;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        q.push(i);
    }
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    while(!q.empty()){
        if(arr[q.front()]>=pq.top()){
            t++;
            if(q.front()==k){
                break;
            }
            pq.pop();
            q.pop();
            
        }else{
            int x=q.front();
            q.pop();
            q.push(x);
        }
    }
    
    return t;
}
