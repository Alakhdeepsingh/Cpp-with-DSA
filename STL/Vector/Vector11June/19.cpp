#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v1;
    for(int i = 0; i<9; i++)
    v1.push_back(10*(i+1));
    cout<<v1.capacity()<<endl;
    for(int i=0; i<v1.size(); i++)
    cout<<v1[i]<<endl;
    v1.clear();
    cout<<v1.capacity()<<endl;
    cout<<v1.size()<<endl;
    }
// 16
// 10
// 20
// 30
// 40
// 50
// 60
// 70
// 80
// 90
// 16
// 0