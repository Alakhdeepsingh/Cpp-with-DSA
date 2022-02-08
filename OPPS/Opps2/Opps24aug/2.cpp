#include<iostream>
#include <cstring>
using namespace std;
class student{
    int age;
    char *name;
    public:
student(int age,char *name){
    //Shallow copy
    // (*this).age=age;
    // (*this).name=name;

    //Deep copy
    (*this).age=age;
    (*this).name=new char[strlen(name)+1];
    strcpy((*this).name,name);
}
void display(){
    cout<<age<<"  "<<name<<endl;
}
};
int main()
{
    char name[]="abcd";
    student s1(20,name);
    s1.display();
    name[3]='e';
    student s2(30,name);
    s2.display();   
    s1.display();
    return 0;
}
// 20  abcd
// 30  abce
// 20  abcd