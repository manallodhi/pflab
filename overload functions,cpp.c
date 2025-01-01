/*Overloaded Functions
○ Definition: Functions with the same name but different parameter types or
numbers.
○ Task: Overload a function to perform addition for integers and doubles.*/

#include <iostream>
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
