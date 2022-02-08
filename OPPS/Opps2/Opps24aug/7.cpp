//Intialisation List
#include<iostream>
using namespace std;
class student {
    public:
    int age;
    const int RollNumber;
    student (int r){ 
        RollNumber=r;
    }
    void display(){
        cout<<age<<" "<<RollNumber<<endl;
    }
};

int main()
{
    student s1;
    s1.age=20;
    s1.RollNumber=101;
    s1.display();
    return 0;
}