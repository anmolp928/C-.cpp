#include<iostream>
using namespace std;

int main(){
    //Pointers in C++..
      //..Pointers are the data types holds the address of other data type

      int a=34;
      int* b=&a;

    //  & ----> (address of) operator
      cout<<"The address of a is "<<&a<<endl;
      cout<<"The address of b is "<<b<<endl;

     //  * ----> (value at)  dereference operator  
      cout<<"The value at address of b is "<<*b<<endl;

      //Pointer to pointer variable
      int** c=&b; // c contains the address of b
      cout<<"The address of b is "<<&b<<endl;
      cout<<"The address of b is "<<c<<endl;
      cout<<"The value at address of c is "<<**c<<endl;
      cout<<"The value at address value_at(value_at(c)) is "<<*c<<endl;
    
    return 0;
}