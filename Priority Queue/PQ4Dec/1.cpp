//Inplace Heap Sort in best tc
#include<bits/stdc++.h>
using namespace std;
void inplaceheapsort(int input[], int n){
    //Build the heap in input array
    for(int i=1; i<n; i++){
        //upheapify
        int childindex=i;
        while(childindex>0){
            int parentindex=(childindex-1)/2;
            if(pq[childindex]<pq[parentindex]){
                int temp=pq[parentindex];
                pq[childindex]=pq[parentindex];
                pq[parentindex]=temp;
            }
            else{
                break;
            }
            childindex=parentindex;
        }
    }
    //downheapify
    int size=n;
    while(size>1){
        int temp=pq[0];
        pq[0]=pq[size-1];
        pq[size-1]=temp;
        size--;

        int parentindex=0;
        int leftchildindex=2*parentindex+1;
        int rightchildindex=2*parentindex+2;

        while(leftchildindex<size()){
            int minindex=parentindex;
            if(pq[minindex]>pq[leftchildindex]){
                minindex=leftchildindex;
            }
            if(rightchildindex<size() && pq[rightchildindex]< pq[minindex]){
                minindex=rightchildindex;
            }
            if(minindex==parentindex){ 
                break;
            }
            int temp=pq[minindex];
            pq[minindex]=pq[parentindex];
            pq[parentindex]=temp;
        }
    }
}
int main()
{
    int input[]={5,1,2,0,8};
    inplaceheapsort(input,5);
    for(int i=0; i<5; i++){
        cout<<input[i]<<endl;
    }
    return 0;
}

