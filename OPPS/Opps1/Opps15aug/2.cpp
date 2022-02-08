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
};
int main()
{
    student s1,s2,s3;//copy names
    
    s1.rollNumber=104;
    s1.display();
    return 0;
}
// 4194432 104
