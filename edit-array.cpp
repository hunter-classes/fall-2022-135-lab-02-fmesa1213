/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 2C

This code shows an array and lets the user edit it
*/

#include <iostream>

using namespace std;

int main() 
{

  int i, v, myData[10];
  for(i = 0; i < 10; ++i)
{
  myData[i] = 1;
}
  
do {
cout << endl;
for(int i = 0; i < 10; ++i) 
{
cout << myData[i] << " ";
}

cout << endl << endl;
cout << "Input index: ";
cin >> i;
cout << "Input value: ";
cin >> v;

if(i >= 0 && i < 10)
{myData[i] = v;}

} while(i >= 0 && i < 10);

  cout << "\nIndex out of range. Exit." << endl;
return 0;
}
