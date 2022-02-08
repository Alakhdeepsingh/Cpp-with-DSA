#include<iostream>
#include<vector>
using namespace std;
    void printVec(vector<int> v){
    for(int i=0; i<v.size(); i++){
        //v.size() -> O(1)
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        printVec(v);
        v.push_back(x);
    }
    return 0; 

}
// 5
// 1 2 3 4 5

// 1
// 1 2
// 1 2 3
// 1 2 3 4

