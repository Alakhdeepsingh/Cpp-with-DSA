#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v1;
    cout<<v1.capacity()<<endl;
    for(int i=0; i<=9; i++)
        v1.push_back(10*(i+1));
        cout<<v1.capacity()<<endl;
        v1.pop_back();
        cout<<v1.capacity()<<endl;
        v1.pop_back();
        cout<<v1.capacity()<<endl;
        v1.pop_back();
        cout<<v1.capacity()<<endl;
    return 0;
}
// 1
// 2
// 4
// 4
// 8
// 8
// 8
// 8
// 16
// 16