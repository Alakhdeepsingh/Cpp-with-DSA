// Code : In-place heap sort


void inplaceHeapSort(int input[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Change in the given input itself.
     * Taking input and printing output is handled automatically.
     */

    
    
//     for(int i = 1; i < n; i++) {
		
// 		int childIndex = i;
// 		while(childIndex > 0) {
// 			int parentIndex = (childIndex - 1) / 2;

// 			if(pq[childIndex] < pq[parentIndex]) {
// 				int temp = pq[childIndex];
// 				pq[childIndex] = pq[parentIndex];
// 				pq[parentIndex] = temp;
// 			}
// 			else {
// 				break;
// 			}
// 			childIndex = parentIndex;
// 		}
// 	}

// 	// Remove elements

// 	int size = n;

// 	while(size > 1) {
// 		int temp = pq[0];
// 		pq[0] = pq[size - 1];
// 		pq[size-1] = temp;

// 		size--;

// 		int parentIndex = 0;
// 		int leftChildIndex = 2 * parentIndex + 1;
// 		int rightChildIndx = 2 * parentIndex + 2;

// 		while(leftChildIndex < size) {
// 			int minIndex = parentIndex;
// 			if(pq[minIndex] > pq[leftChildIndex]) {
// 				minIndex = leftChildIndex;
// 			}
// 			if(rightChildIndx < size && pq[rightChildIndx] < pq[minIndex]) {
// 				minIndex = rightChildIndx;
// 			}
// 			if(minIndex == parentIndex) {
// 				break;
// 			}
// 			int temp = pq[minIndex];
// 			pq[minIndex] = pq[parentIndex];
// 			pq[parentIndex] = temp;

// 			parentIndex = minIndex;
// 			leftChildIndex = 2 * parentIndex + 1;
// 			rightChildIndx = 2 * parentIndex + 2;
// 		}
// 	}




    //Insert in heap
    for(int i=1;i<n;i++){
        int childIndex=i;
			while(childIndex>0){
				int parentIndex=(childIndex-1)/2;
				if(input[childIndex]<input[parentIndex]){
					int temp;
					temp=input[childIndex];
					input[childIndex]=input[parentIndex];
					input[parentIndex]=temp;
				}
				else{
					break;
				}
				childIndex=parentIndex;
				
				
			}
    }
    
    //Remove
    int size=n;

    while(size>1){
        
    
    int ans=input[0];
    input[0]=input[size-1];
    input[size-1]=ans;
                size--;

        // pq.pop_back();
        int parentIndex=0;
        while((2*(parentIndex)+1) <size && (2*(parentIndex)+2)< size){
            int childIndex1=2*(parentIndex)+1;
            int childIndex2=2*(parentIndex)+2;
            int minIndex;
            
            if(input[childIndex1]<input[childIndex2]){
                minIndex=childIndex1;
            }else{
                minIndex=childIndex2;
            }
            
            if(input[parentIndex]>input[minIndex]){
                int temp=input[minIndex];
                input[minIndex]=input[parentIndex];
                input[parentIndexo]=temp;
            }else{
                break;
            }
            
            parentIndex=minIndex;
        
            
        }
    
    }
    
}
