#include <iostream>
using namespace std;

class Student{
    public :
    char name;
    int rollNo;

    Student(int num){
        rollNo = num;
    }

    void print(){
        cout << name << " "  <<  rollNo;
    }
};

int main() {
    Student *s = new Student(15); //In this new Student(15); function is calling , student function is calling
    s -> name = 'A';
    s -> rollNo = 15;
    s -> print();
}
