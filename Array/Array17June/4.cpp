#include<iostream>
using namespace std;
void printAllPrefixes(input[]){ 
    for(int i=0; input[i]!='\0'; i++){
        for(int j=0; i<=j; j++){
            cout<<input[j];
        }
        cout<<endl;
    }
}
int main()
{
    int input1[100]="abcd";
    printAllPrefixes(input1);
    return 0;
}

