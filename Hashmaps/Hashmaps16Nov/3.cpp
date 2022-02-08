#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> ourmap;
    //insert
    //1st way to insert
    pair<string,int>p("abc",1);
    ourmap.insert(p);
    //2nd way to insert
    ourmap["def"]=2;
    //find or access 
    //1st way to find
    cout<<ourmap["abc"]<<endl;
    //2nd way to find
    cout<<ourmap.at("abc")<<endl;

    cout<<"size:"<<ourmap.size()<<endl;
    cout<<ourmap["ghi"]<<endl;
    cout<<"size:"<<ourmap.size()<<endl;

    //check presence
    if(ourmap.count("ghi")>0){
        cout<<"ghi is present"<<endl;
    }
    //erase
    ourmap.erase("abc");
    ourmap.erase("ghi");
    cout<<"size:"<<ourmap.size()<<endl;
    if(ourmap.count("ghi")>0){
        cout<<"ghi is present"<<endl;
    }
    return 0;
}
// 1
// 1
// size:2
// 0
// size:3
// ghi is present
// size:2

