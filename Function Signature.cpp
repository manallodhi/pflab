/*Function Signature
○ Definition: The name of the function and the types of its parameters (excluding
the return type).
○ Task: Write a program to demonstrate how the compiler differentiates between
function overloads based on their signatures.*/

#include <iostream>
#include <string>
using namespace std;

void info(double x , int y)
{
    cout <<x+y <<endl ;
}

void info(int x , int y)
{
    cout << x-y <<endl;
}

int main()
{

 info(5 , 1);
 info(5.5, 3);
 return 0 ;
}
