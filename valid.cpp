/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2 A

The program asks the user for an integer between 1 and 100 and then squares that number.
*/

#include <iostream>
using namespace std;

int main()
{
  
cout << "Please enter an integer: "<< endl;
int num100 = 0;
cin >> num100;
 
 int numnew = 0;
   
		while ((num100 > 0) || (num100 < 100))
  {
		numnew = num100*num100;
      cout << "Number squared is " + numnew + "."<< endl;
	}
  
  if (!(num100 > 0) || !(num100 < 100))
  {
     cout << "Please re-enter: "<< endl;
int num100 = 0;
cin >> num100;
  }
return 0;
}

