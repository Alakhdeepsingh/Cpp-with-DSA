#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v1;
    cout<<v1.capacity()<<endl;
    for(int i = 0; i<9; i++)
    v1.push_back(10*(i+1));
    cout<<v1.capacity()<<endl;
    for(int i=0; i<v1.size(); i++)
    cout<<v1[i]<<endl;
    cout<<v1.at(3);
    return 0;
}
// 10
// 20
// 30
// 40
// 50
// 60
// 70
// 80
// 90
// 40
