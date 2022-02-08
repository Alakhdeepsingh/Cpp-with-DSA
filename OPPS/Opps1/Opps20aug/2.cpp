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
student(int r){
    cout<<"Constructor 2 Called"<<endl;
    rollNumber = r;
    
}
student (int a, int r){
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
    student s1;
    s1.display();
    student s2;
    student *s3=new student();
    s3->display();
    cout<<"Parametrized Constructor Demo"<<endl;
    student s4(10);
    s4.display();
    student *s5 =new student (101);
    (*s5).display();
    student s6(20,1002);
    s6.display();
    return 0;
}
// Constructor Called
// -1228205281
// 1977928896
// Constructor Called
// Constructor Called
// 17039552
// 17071976
// Parametrized Constructor Demo
// Constructor 2 Called
// 6422224
// 10
// Constructor 2 Called
// 17039552
// 101
// Constructor 3 Called
// 20
// 1002