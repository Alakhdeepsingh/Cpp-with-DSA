#include<iostream>
#include<vector>
using namespace std;
void printVec(vector<int> v){
    for(int i=0; i<v.size(); i++){
        //v.size() -> O(1)
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
        printVec(v);
    return 0; 

}
// 5
// 2 5 7 9 3
// 2 5 7 9 3
