#include<iostream>
using namespace std;
class Student{
    public:  //access modifier
    int age;
    int rollnumber;
};
int main()
{
    //create objects statically
    Student s1;
    Student s2;
    Student s3,s4,s5;
    s1.age=24;
    s1.rollnumber=101;
    s2.age=30;
    cout<<s1.age<<endl;
    cout<<s1.rollnumber<<endl;
    //Create objects dynamically
    Student *s6 = new Student;
    (*s6).age= 23; 
    (*s6).rollnumber= 104;
     cout<<(*s6).age<<endl;
    cout<<(*s6).rollnumber<<endl;
            //or
    // s6 ->age =23;
    // s6->rollnumber=104;
    return 0;
}
// 24
// 101
// 23
// 104

