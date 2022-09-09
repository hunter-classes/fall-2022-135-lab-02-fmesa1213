/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 2D

This code uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
As the code progresses, the number gets higher, but also negative. I don't understand why it went negative and I tried to figure it out, but I couldn't.
I was wondering after this assignment is submitted if you could send me the correct code, so I could see what i did wrong.
*/

#include <iostream>
using namespace std;

int main()
{
int fib[60]; 
int i;

fib[0] = 0;
fib[1] = 1;

for(i = 2; i < 60; i++)

fib[i] = fib[i-1] + fib[i-2];

for (i = 0; i < 60; i++)

printf("%3d %6d\n", i, fib[i]); 

return 0;
}
