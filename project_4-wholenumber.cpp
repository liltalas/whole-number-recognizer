//The assignment is to write a program that prompts the user to enter a number,
//Then check if the number provided is a whole or not.
#include<iostream>
using namespace std;

int main() 
  {
   cout << "What you see is what you get approach \n";
    
    float n;
        cout << "Enter a number:" << endl; //prompt the user to enter a number.
   cin>>n;
   //check whether the number entered is whole number or not with the help of if/else statement.
   if((float)n==(int)n) //if the number entered is equal to an integer, then it is a whole number.
   //but if the entered number is float, which is a decimal, then it is not a whole number.
        cout<<"The number you entered is a whole number.\n";
    else 
        cout << "The number you entered is not a whole number.\n";
    cout << "Please hit Enter to exit..."<<endl;
   return 0;
   
  }


