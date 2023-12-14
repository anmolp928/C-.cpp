#include<iostream>
using namespace std;
int main(){
    // cout<<"This is my 8th lecture";
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    //1. Selection control statements: if else-else if ladder
    // if((age<18)&&(age>0)){
    //     cout<<"You cannot come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You need a kid to pass into my party"<<endl;
    // }
    // else if (age<1){
    //     cout<<"You are not yet born";
    // }
    // else{
    //     cout<<"You can come to my party"<<endl;
    // }

    //2.Selection control statements: Switch Case Statements
     switch(age)
     {
        case 18:
          cout<<"You are 18"<<endl;
          break;
        case 63:
         cout<<"You are 63"<<endl;
         break;
        default:
         cout<<"Such age is not found"<<endl;
     }
     cout<<"You got your answer";
    return 0;
}