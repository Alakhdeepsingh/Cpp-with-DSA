#include <iostream>
using namespace std;
void change(int *x, int *y){
*x = 10; /*change the value of x */
*y = 20; /*change the value of y */
}
void change(int *x, int *y);
int main (){
// local variable declaration:
int a = 100;
int b = 200;
cout<<"Before value of a "<<a <<endl;
cout<<"Before value of b "<<b<< endl;
change(&a, &b);
cout<<"After value of a "<<a<<endl;
cout<<"After value of b "<<b<<endl;
return 0;
}
// Before value of a 100
// Before value of b 200
// After value of a 10
// After value of b 20