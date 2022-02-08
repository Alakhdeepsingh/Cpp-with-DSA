#include<iostream>
using namespace std;
class student{  //created class
public:         // public 
int rollNumber;
private:        //private
int age;        //from line 3 to 9 is called the template
public:
//Default constructor
student(){
    cout<<"Constructor Called"<<endl;
}

void display(){
    cout<<age<<endl;
    cout<<rollNumber<<endl;
} 
int getAge(){
    return age;
}
};
int main(){
    student s1;
    s1.display();
    student s2;
    student *s3=new student();
    s3->display();
    return 0;
}
// Constructor Called
// 3338240
// 0
// Constructor Called
// Constructor Called
// 14745792
// 14774848