#include<iostream>
using namespace std;
int main(){
vector<int>v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        vector<vector<int>>temp;
        vector<int> subset;
        int index = 0;
        fn(v, temp, subset, index);
        for(int i = 0;i<temp.size();i++){
            for(int j = 0;j<temp[i].size();j++){
                cout<<temp[i][j]<<" ";
            }
            cout<<endl;
        }

        void fn(vector<int>& v, vector<vector<int> >& temp,
                 vector<int>& subset, int index)
{
    temp.push_back(subset);
    for (int i = index; i < v.size(); i++) {
        subset.push_back(v[i]);
        fn(v, temp, subset, i + 1);
        subset.pop_back();
    }
 
    return;
}