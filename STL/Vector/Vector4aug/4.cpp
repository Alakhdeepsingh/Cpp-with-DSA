

#include<iostream>
#include<vector>
using namespace std;
void printVec(vector<int> v){
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v;
    v.push_back(7);
    v.push_back(6); //->O(1)
    printVec(v);
    v.pop_back(); //->O(1)
    printVec(v); 
    return 0;
}
// 2
// 7 6
// 1
// 7