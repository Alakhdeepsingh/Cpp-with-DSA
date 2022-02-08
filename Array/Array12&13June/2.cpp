#include <bits/stdc++.h>
using namespace std;
 
void mergeArray(int arr1[], int arr2[],
                int n, int m)
{
     
    // Now traverse the array1 and if
    // arr2 first element
    // is less than arr1 then swap
    for(int i = 0; i < n; i++)
    {
        if (arr1[i] > arr2[0])
        {
             
            // Swap
            int temp = arr1[i];
            arr1[i] = arr2[0];
            arr2[0] = temp;
 
            // After swapping we have to sort the array2
            // again so that it can be again swap with
            // arr1
 
            // We will store the firstElement of array2
            // and left shift all the element and store
            // the firstElement in arr2[k-1]
            int firstElement = arr2[0];
 
            int k;
             
            for(k = 1;
                k < m && arr2[k] < firstElement;
                k++)
            {
                arr2[k - 1] = arr2[k];
            }
            arr2[k - 1] = firstElement;
        }
    }
     
    // Read the arr1
    for(int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
 
    // Read the arr2
    for(int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }
}
 
// Driver Code
int main()
{
    int arr1[] = { 1, 3, 5, 7 };
    int arr2[] = { 0, 2, 6, 8, 9 };
    int n = arr1.length, m = arr2.length;
     
    mergeArray(arr1, arr2, n, m);
}