//selection sort
#include<iostream>
using namespace std;
int main()
{
    int n,minindex;
    cin>>n;
    int input[n];  
        for(int i=0; i<n-1; i++){
        int min =input[0];
        for(int j=1; j<n; j++){  
            if(input[j]<min){
                min=input[j];
                minindex=j;
            }
        }
    int temp=input[i];
    input[i]=input[minindex];
    input[minindex]=temp;
        }
    for(int i=0; i<n; i++){
    cout<<input[i]<<"  ";
    }     
    cout<<endl;
    return 0;
}

