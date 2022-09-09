/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 2C

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
using namespace std;

int main()
{
double values[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }; 

  for (int i = 0; i < 10 ; i++)
    {
     cout << values[i] << " ";
      }
 
  for (int i = 0; i < 10 ; i++){
  do{
    
    cout << "\n Please input index: "<< endl;
    cin >> values[i];
  
    cout << "Please input new value: "<< endl;
    cin >> values[i-1];
      

    for(int i = 0; i < 10 ; i++)
      {
        cout<< values[i]<< " ";
      }
    
  }while (values[10] < 10);
    }
 
    
    cout<<"Index out of range. Exit."<< endl;
    
  return 0;
}
