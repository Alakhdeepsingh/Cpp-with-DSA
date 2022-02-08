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
student(int rollNumber){
    cout<<"Constructor 2 Called"<<endl;
    this->rollNumber = rollNumber; //argument rollNumber ki value object ke rollNumber mai daal dho

 }
// student (int a, int r){
//     cout<<this<<endl;
//     cout<<"Constructor 3 Called"<<endl;
//     age=a;
//     rollNumber=r;
// }
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
    student s1(50);
    s1.display();
    student s2(100);
    s2.display();
    student *s3=new student;
    s3->display();

    // s2=s1;  //copy assignment operator
    // *s3=s1;
    // s2=*s3;
    return 0;
}
// Constructor 2 Called
// -2
// 50
// Constructor 2 Called
// 1990577344
// 100
// Constructor Called
// 15073472
// 15102528

