/*Pass by Value
○ Definition: Copies the value of the arguments into the function's parameters.
○ Task: Create a function that modifies a parameter passed by value and observe
the changes.*/

#include <iostream>
using namespace std;

//function declarations with different datatypes
int info(int , int);
double info(int , double);
int main()
{

 cout << info(5 , 1) <<endl ;
 cout <<info(5 , 4.4)<<endl ;
 return 0 ;
}
//function definitions

int info(int x , int y)
{
    return x*y;
}
double info(int x , double y)
{
    return x*y;
}
