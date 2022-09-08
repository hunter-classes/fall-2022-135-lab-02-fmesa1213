/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2 A

The program asks the user for an integer between 0 and 100 and then squares that number and returns it.
*/

#include <iostream>
using namespace std;

int main()
{
 int numint; 

cout << "Please enter an integer: "<< endl;
cin >> numint;
 
 int numnew = 0;
 
  while (numint <= 0 || numint >= 100)
    {
      cout << "Integer invalid. "<< endl;  
      
      cout<< "Please re-enter: "<< endl;
      cin >> numint;
    }

		if ((numint > 0) && (numint < 100))
  {
		int numnew = (numint*numint);
      cout << "Number squared is " << (numnew) << "."<< endl;
	}
  
  return 0;
}
