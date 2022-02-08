#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    for(int i=1; i<=n; i++){
        if(i==1){
            cout<<"monday";
        }
        else if(i==2){
            cout<<"tuesday";
        }
        else if(i==3){
            cout<<"wednesday";
        }
        else if(i==4){
            cout<<"thursday";
        }
        else if(i==5){
            cout<<"friday";
        }
        else if(i==6){
            cout<<"saturday";
              
        }
        else if(i==7){
            cout<<"sunday";
      
        }
        else if(i<1){
            cout<<"number is smaller than 1";
               
        }
        else {
            cout<<"bigger than 7";
        }
    }
    return 0;
}

