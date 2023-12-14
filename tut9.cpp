#include<iostream>
using namespace std;
int main(){
    int choice, a, b,c;
    cout<<"\n1. Addition";
    cout<<"\n2. Odd-Even";
    cout<<"\n3. Print first N natural numbers";
    
    cout<<"\n\nEnter your choice";
    cin>>choice;
    switch(choice)
    {
        case 1:
         cout<<"Enter two numbers";
         cin>>a>>b;
         c=a+b;
         cout<<"\nSum is "<<c;
         break;
        case 2:
          cout<<"Enter a number";
          cin>>a;
          if(a%2==0)
            cout<<"Even number";
          else
            cout<<"Odd number";
            break; 
        case 3:
           cout<<"Enter a number";
           cin>>a;
           for(b=1;b<=a;b++)
            cout<<b;
           break;
        default:
           cout<<"Invalid Choice";        
    }
    return 0;
}