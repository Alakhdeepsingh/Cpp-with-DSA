#include<iostream>
using namespace std;
class student{  //created class
public:         // public 
int rollNumber;
private:        //private
int age;        //from line 3 to 9 is called the template
public:
//Default constructor
// student(){
//     cout<<"Constructor Called"<<endl;
// }
//Parametrized constructor
Student(int rollNumber){
    cout<<"Constructor 2 Called"<<endl;
    rollNumber = rollNumber;
    
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
int main()
{
    student s1(10,1002);
    s1.display();
    student s2(s1);
    s2.display();

    return 0;
}
// 0x61ff08
// Constructor 3 Called
// 10
// 1002
// 10
// 1002

