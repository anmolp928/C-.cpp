#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // int a = 59;
    // cout<<"The value of a was "<<a<<endl;
    // a = 97;
    // cout<<"The value of a is "<<a<<endl;
     //if we don't want to change the value of a variable in program then we use const 
     //... keyword in c/c++

   /* Contants in C++*/  
//    const int a=93;
//    cout<<"The value of a was "<<a<<endl;
//    a=56;//We will get an error because a is constants
//    cout<<"The value of a is "<<a<<endl;

      /*Manipulators in C++*/
      //endl-->is  manipulator we all ready know about this 
//    int a =9 ,b=47,c=179,d=9873;
//    cout<<"The value of a without setw is "<<a<<endl;   
//    cout<<"The value of a without setw is "<<b<<endl;   
//    cout<<"The value of a without setw is "<<c<<endl;   
//    cout<<"The value of a without setw is "<<d<<endl;   
    
//    cout<<"The value of a is "<<setw(4)<<a<<endl;//it takes 4 width ...by using this we
//                                                 //...the numbers right justified
//    cout<<"The value of b is "<<setw(4)<<b<<endl;
//    cout<<"The value of c is "<<setw(4)<<c<<endl;
//    cout<<"The value of d is "<<setw(4)<<d<<endl;


   /*Operator Precedence*/
 int a = 5, b = 78;
 int c = ((((a*b)+b)-45)+87);//visit website cppprecedence.com ...to check precedence order
 cout<<c;
   return 0;
}