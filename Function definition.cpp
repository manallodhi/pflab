/*Function Definition
○ Definition: The implementation of the function logic.
○ Task: Define a function that calculates the sum of two integers.*/

#include <iostream>
using namespace std;

//function declarations
void info(int , int);
void info(double , int);
int main()
{
 info(5 , 1);
 info(5.5, 3);
 return 0 ;
}
//function definitions
void info(double x , int y)
{
    cout <<x+y <<endl ;
}
void info(int x , int y)
{
    cout << x-y <<endl;
}
