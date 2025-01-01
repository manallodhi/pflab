/*Return Type
○ Definition: The data type of the value returned by the function.
○ Task: Write functions with different return types: int, double, and void.*/

#include <iostream>
using namespace std;

//function declarations with different datatypes
int info(int , int);
void info(double , int);
double info(int , double);
int main()
{

 cout << info(5 , 1) <<endl ;
 info(5.55 , 66);
 cout <<info(5 , 4.4)<<endl ;
 return 0 ;
}
//function definitions
void info(double x , int y)
{
  cout << x-y <<endl;
}
int info(int x , int y)
{
    return x+y;
}
double info(int x , double y)
{
    return x*y;
}
