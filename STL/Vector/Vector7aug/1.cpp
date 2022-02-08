//Nesting in vector
#include<iostream>
#include<vector>
using namespace std;
void printVec(vector<pair<int,int> > &v){
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<"  "<<v[i].second<<endl;
    }
}
int main(){
    vector<pair<int,int> > v ={{1,2},{2,3},{4,5}};
    printVec(v);
    return 0;
}

// 3
// 1  2
// 2  3
// 4  5