#include<iostream>
using namespace std;

int main(){

    /* ..break statements.. */
    // for (int i = 0; i < 4; i++)
    // {
    //     /* code */
    //     -..s // cout<<i<<endl; //it prints 0, 1,2
    //     if(i==2){
    //         break;// it exits the loop
    //     }
    //     cout<<i<<endl;// it prints 0,1
    // }

    
//  continue statement with for loop
    // loop from 1 to 10
    for (int i = 1; i <= 10; i++) {
  
        // If i is equals to 4,
        // continue to next iteration
        // without printing
        if (i == 4)
            continue;
  
        else
            // otherwise print the value of i
            cout << i << " ";
    }
  
    return 0;
}
    
