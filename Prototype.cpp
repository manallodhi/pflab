/*Function Declaration (Prototype)
○ Definition: A statement that declares the function before it is defined.
○ Task: Show the use of function declarations with separate definitions.*/


#include <iostream>
using namespace std;


void info(int , int);
void info(double , int);
int main()
{
 info(5 , 1);
 info(5.5, 3);
 return 0 ;
}

void info(double x , int y)
{
    cout <<x+y <<endl ;
}

void info(int x , int y)
{
    cout << x-y <<endl;
}
