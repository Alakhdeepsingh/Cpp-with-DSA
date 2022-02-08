
// Code : Max Priority Queue\


/***************
 * Following is the main function that er are using internally
 *
 
int main() {
    PriorityQueue pq;
    int choice;
    cin >> choice;
    while(choice != -1) {
        switch(choice) {
            case 1 : // insert
                int element;
                cin >> element;
                pq.insert(element);
                break;
            case 2 : // getMax
                cout << pq.getMax() << endl;
                break;
            case 3 : // removeMax
                cout << pq.removeMax() << endl;
                break;
            case 4 : // size
                cout << pq.getSize() << endl;
                break;
            case 5 : // isEmpty
                if(pq.isEmpty()) {
                    cout << "true" << endl;
                }
                else {
                    cout << "false" << endl;
                }
            default :
                return 0;
        }
        cin >> choice;
    }
}
*******************/
#include<vector>
class PriorityQueue {
    // Complete this class
    vector<int> pq;
    public:
    
    int getSize(){
        return pq.size();
    }
    
    bool isEmpty(){
        return pq.size()==0;
    }
    
    int getMax(){
        return pq[0];
    }
    
    void insert(int element){
        pq.push_back(element);
        int childIndex=pq.size()-1;
        while(childIndex>0){
            int parentIndex=(childIndex-1)/2;
            if(pq[childIndex]>pq[parentIndex]){
                int temp=pq[childIndex];
                pq[childIndex]=pq[parentIndex];
                pq[parentIndex]=temp;
            }else{
                break;
            }
            childIndex=parentIndex;
        }   
    }
    int removeMax(){
        int size=pq.size()-1;
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        
        int parentIndex=0;
        while((2*parentIndex+1)<size && (2*parentIndex+2)<size){
            int childIndex1=2*parentIndex+1;
            int childIndex2=2*parentIndex+2;
            int maxIndex;
            if(pq[childIndex1]>pq[childIndex2]){
                maxIndex=childIndex1;
            }else{
                maxIndex=childIndex2;
            }
            
            if(pq[maxIndex]>pq[parentIndex]){
                int temp=pq[maxIndex];
                pq[maxIndex]=pq[parentIndex];
                pq[parentIndex]=temp;
            }else{
                break;
            }
            
            parentIndex=maxIndex;
            
        }
        
        return ans;
        
    }
    
};
