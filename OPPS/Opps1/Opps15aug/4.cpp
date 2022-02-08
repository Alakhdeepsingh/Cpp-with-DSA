#include<iostream>
using namespace std;
class student{  //created class
public:         // public 
int rollNumber;
private:        //private
int age;        //from line 3 to 9 is called the template
public:
void display(){
    cout<<age<<" "<<rollNumber;
}
int getAge(){
    return age;
}
};
int main()
{
    /*now using this template i will create the copies template in int main()*/
    student s1,s2,s3;//copy names
    s1.age=28;
    s1.rollNumber=104;
    cout<<s1.age<<s1.rollNumber<<endl;
    s1.display();
    return 0;
}