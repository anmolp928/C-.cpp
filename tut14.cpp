#include<iostream>
using namespace std;

int main(){
    //Array example

    int marks[5]={23,34,44,67,89};
    int Math_marks[4];
    Math_marks[0]=456;
    Math_marks[1]=234;
    Math_marks[2]=988;
    Math_marks[3]=768;
    cout<<"These are Math_marks"<<endl;
    cout<<Math_marks[0]<<" ";
    cout<<Math_marks[1]<<" ";
    cout<<Math_marks[2]<<" ";
    cout<<Math_marks[3]<<endl;
   
    // We can the value of an array
    marks[2]=999;
    cout<<"These are marks"<<endl;
    // cout<<marks[0]<<" ";
    // cout<<marks[1]<<" ";
    // cout<<marks[2]<<" ";
    // cout<<marks[3]<<" ";
    // cout<<marks[4]<<" ";

    //using loop print array
    for( int i = 0; i < 5; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    
    return 0;
}