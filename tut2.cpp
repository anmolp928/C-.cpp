#include<iostream>
using namespace std;
int glo = 6; //global variable
void sum(){
    int a; //local variable
    cout<< glo;
}
int main(){
    int glo=9; //local variable
    glo=75;// local variable value updated of glo from 9 to 75
    int a=5,b=7;// local variable
    float pi = 3.14;// local variable
    char c = 'a';// local variable
    bool is_true=false;
    // cout<<"To understad the concept of variables. \nHere the value of a is "<< a<<". \nThe value of b is " << b;
    // cout<<"\nthe value of pi is "<< pi;
    // cout<<"\nthe value of c is "<< c;
    sum();
    cout<< glo <<is_true;
    return 0;
}
// lets understand the concept of local and global variables