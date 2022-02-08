#include<iostream>
using namespace std;

    void reversestring(char input[]){
       int a=0;
        for(int i=0; input[i]!='\0'; i++){
            a++;
            int i=0; j=a-1;
            for(int i=0; i<j; i++){
            char temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            j--;
            }
        }
    }
        int main(){
            int size;
            cin>>size;
            int input[size];
            cin>>input[size];
            reversestring(input);
            cout<<input<<endl;   
    return 0;
}

