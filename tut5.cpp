#include<iostream>
using namespace std;
int main(){
    int a=4,b=5;
    cout<<"Opeartors in C++:"<<endl;
    cout<<"Following are the types operators in C++"<<endl;
    //Arithmetic Operators
    cout<<"The value of a + b is "<<a+b<<endl;//addition
    cout<<"The value of a - b is "<<a-b<<endl;//subtraction
    cout<<"The value of a * b is "<<a*b<<endl;//multiplication
    cout<<"The value of a / b is "<<a/b<<endl;//division
    cout<<"The value of a % b is "<<a%b<<endl;//modulo(remainder check)
    cout<<"The value of a++ is "<<a++<<endl;//post increment 
    cout<<"The value of a-- is "<<a--<<endl;//post decrement
    cout<<"The value of ++a is "<<++a<<endl;//pre increment
    cout<<"The value of --a is "<<--a<<endl;//pre decrement
    cout<<endl;

    //Assignment Operator --> is used to assignment value to the variables
    // int A=25,B=55;
    // char c= 'c';

    //Comparison Operators
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a==b is"<<(a==b)<<endl;
    cout<<"The value of a!=b is"<<(a!=b)<<endl;
    cout<<"The value of a<=b is"<<(a<=b)<<endl;
    cout<<"The value of a>=b is"<<(a>=b)<<endl;
    cout<<"The value of a>b is"<<(a>b)<<endl;
    cout<<"The value of a<b is"<<(a<b)<<endl;
    cout<<endl;

    //Logical Operator
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of logical NOT operator !(a==b) is "<<!(a==b)<<endl;
    cout<<"The value of logical AND operator ((a==b)&&(a<b)) is "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of logical OR operator ((a==b)||(a<b)) is "<<((a==b)||(a<b))<<endl;
    return 0;
}