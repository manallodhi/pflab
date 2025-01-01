/*Default Parameters
○ Definition: Parameters that have default values if no arguments are passed.
○ Task: Write a program demonstrating default parameter usage.*/

#include <iostream>
#include <string>
using namespace std;


void info(int x , int y=6)
{
    cout << x-y;
}

int main()
{

 info(5); //default parameter
 return 0 ;
}

