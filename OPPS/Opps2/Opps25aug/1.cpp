//Class Fraction 
#include<iostream>
using namespace std;
class Fraction{
    private:
    int numerator;
    int denominator;
public:
Fraction(int numerator, int denominator){
    this->numerator=numerator;
    this->denominator=denominator;
}
void print (){
    cout<<this->numerator<<"/"<<denominator<<endl;
}
void simplify (){
    int gcd=1;
    int j=min (this->numerator,this->denominator);
    for(int i=1;i<=j; i++){
        if(this->numerator%i==0 && this->denominator%i==0){
            gcd=i;    
        }
    }
    this->numerator=this ->numerator/gcd;
    this->denominator=this->denominator/gcd;
}
Fraction add(Fraction const &f2){
    int lcm=denominator*f2.denominator;
    int x=lcm/denominator;
    int y=lcm/f2.denominator;
    int num=x*numerator+(y*f2.numerator);
    Fraction fNew(num,lcm);
    fNew.simplify();
    return fNew;
}
};
int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);
    Fraction f3=f1.add(f2);
    f1.print();
    f2.print();
    f3.print();
    return 0;
}
// 10/2
// 15/4
// 35/4
