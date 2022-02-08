//Intialisation List
#include<iostream>
using namespace std;
class student {
    public:
    int age;
    const int RollNumber;
    student (int r):RollNumber(r){ 
    }
    void display(){
        cout<<age<<" "<<RollNumber<<endl;
    }
};
int main()
{
    student s1(101);
    s1.age=20;
    s1.RollNumber;
    student s2(202);
    s2.age=30;
    s1.RollNumber;
    student s3(303);
    s3.age=40;
    s1.RollNumber;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
// 20 101
// 30 202
// 40 303