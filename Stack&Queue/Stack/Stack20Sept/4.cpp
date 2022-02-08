// #include<bits/stdc++.h>
#include<iostream>
// #include<bits/stdc++. h>
// template <typename T>
using namespace std;
template <typename T,typename V>
class pair{
    T x;
    V y;
    public:
    T setX(T x){
        this->x=x;
    }
    T getX(){
        return x;
    }
    void setY(V y){
        this->y=y;
    }
    V getY(){
        return y;
    }
};
int main()
{
pair<pair<<int,int>,int>p1;
p1.setY(10);
pair<int,int>p4;
p4.setX(5);
p4.setY(16);
cout<<p2.getX().getX()<<p1.getX().getY()<<p2.getY()<<endl;
// pair<double>p2;
// p2.setX(100.34);
// p2.setY(34.21);
// cout<<p2.getX()<<p2.getY()<<endl;
return 0;
}
