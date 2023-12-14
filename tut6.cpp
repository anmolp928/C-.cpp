#include<iostream>
using namespace std;
int c=94;
int main(){
         // *******Build in data types*******//
    // int a,b,c;
    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global is c is"<<::c;//"::" -->scope resolution operator;it prints the value of 
    //..global variable.

       //****** float, double ,long double and Literals*****//
    // float d=34.4F;
    // long double e=34.4L;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;//prints double size
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;//prints float size
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;//prints float size
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;//prints long double size
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;//prints long double size

    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;

                //*****Reference variables****//
    //Anmol--->> lalla--->>bhaiya
    // float x=667;
    // float &y=x; // y becomes the reference variable of x
    // cout<<x<<endl;
    // cout<<y<<endl;

               //**Typecasting****//
    //it means to convert one data type into another data type
    int a=45;
    float b=45.56;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<int(b)<<endl;   
    cout<<"The value of b is "<<(int)b<<endl;
    int c = int(b);

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;                
    return 0;
} 