#include<iostream>
//template <typename T>
using namespace std;
template <typename T>
class pairs{
    T x;
    T y;
    public:
    T setX(T x){
        this->x=x;
    }
    T getX(){
        return x;
    }
    void setY(T y){
        this->y=y;
    }
    T getY(){
        return y;
    }
};
int main()
{
pairs<int>p1;
p1.setX(10);
p1.setY(20);
cout<<p1.getX()<<"  "<<p1.getY()<<endl;
pairs<double>p2;
p2.setX(100.34);
p2.setY(34.21);
cout<<p2.getX()<<"  "<<p2.getY()<<endl;
return 0;
}
// 10  20
// 100.34  34.21