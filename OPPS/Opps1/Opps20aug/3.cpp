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
//Parametrized constructor
Student(int rollNumber){
    cout<<"Constructor 2 Called"<<endl;
    (*this).rollNumber = rollNumber;   
}
student (int a, int r){
    cout<<this<<endl;
    cout<<"Constructor 3 Called"<<endl;
    age=a;
    rollNumber=r;
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
    student s1(10,1002);
    cout<<&s1<<endl;
    student s2(20,1002);
    s2.display();
    // student s1;
    // s1.display();
    // student s2;
    // student *s3=new student();
    // s3->display();
    // cout<<"Parametrized Constructor Demo"<<endl;
    // student s4(10);
    // s4.display();
    // student *s5 =new student (101);
    // (*s5).display();
    // student s6(20,1002);
    // s6.display();
    return 0;
}
// 0x61ff08
// Constructor 3 Called
// 0x61ff08
// 0x61ff00
// Constructor 3 Called
// 20
// 1002