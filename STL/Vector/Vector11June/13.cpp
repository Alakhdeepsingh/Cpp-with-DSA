#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v1;
    cout<<v1.capacity()<<endl;
    v1.push_back(10);
    cout<<v1.capacity()<<endl;
    v1.push_back(20);
    cout<<v1.capacity()<<endl;
    v1.push_back(30);
    cout<<v1.capacity()<<endl;
    return 0;
}
// 0
// 1
// 2
// 4