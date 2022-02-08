#include<iostream>
#include<vector>
using namespace std;
void printVec(vector<int> v){
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int>v(10);  
    v.push_back(7);
    printVec(v);
    return 0;
}
// 11
// 0 0 0 0 0 0 0 0 0 0 7
