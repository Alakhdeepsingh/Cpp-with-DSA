#include<iostream>
using namespace std;
int main()
{
    pair<int,string> k;
    k={8,"zyx"};
    pair<int, string>&p1=k;
    p1.first=3;
    cout<<k.first<<" "<<k.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    return 0;
}
// 3 zyx
// 1 2
// 2 3
// 3 4

