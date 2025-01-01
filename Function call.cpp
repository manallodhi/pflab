/*Function Call
○ Definition: The act of invoking a function by its name.
○ Task: Create a program that calls a function multiple times with different
arguments.*/

#include <iostream>
using namespace std;

//function declarations
void info(double , int);
int main()
{
 info(5.5, 3); //calling function
 info(66.6,55); //calling function with different argument
 info(9.6,5); //calling function with different argument
 info(96.6,95); //calling function with different argument
 return 0 ;
}
//function definitions
void info(double x , int y)
{
    cout <<x+y <<endl ;
}
