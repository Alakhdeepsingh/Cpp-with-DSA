 //copy assignment operator
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
// Student(int rollNumber){
//     cout<<"Constructor 2 Called"<<endl;
//     rollNumber = rollNumber;
    
// }
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
// int getAge(){
//     return age;
// }
};
int main()
{
    student s1(10,1001);
    s1.display();
    student s2(20,2001);
    s2.display();
    student *s3=new student (30,3001);
    (*s3).display();

    s2=s1;  //copy assignment operator
    *s3=s1;
    s2=*s3;
    return 0;
}
// 0x61fef4
// Constructor 3 Called
// 10
// 1001
// 0x61feec
// Constructor 3 Called
// 20
// 2001
// 0xf21728
// Constructor 3 Called
// 30
// 3001

