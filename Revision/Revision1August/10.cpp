#include<iostream>
using namespace std;
void Assign(int Default1,int Default2=30){
    Default1=Default1+Default2;
    cout<<Default1<<Default2;
}   

    int main(){
    int Present=25,Past=35;
    Assign(Present,Past);
    Assign(Present);  
    return 0; 
    }

