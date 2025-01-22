#include <iostream>
using namespace std ;

int main(){
    int x = 10 ;
    int *ptr = &x ;

    cout << "value of x : " << x << endl ;
    cout << "Address of x : " << &x << endl ;
    cout << "value stored in pointer (address of x) : " << &ptr << endl ;
    cout << "value pointed to by ptr : " << *ptr << endl ;

  return 0 ;
}

// Definition : Pointer is a variable which stores another variables addresses .
// When we use pointers it is necessary to have another variable for value  .
/* A pointer in C++ is a variable that stores the memory address of another variable.
  To assign a value to a pointer, you need to use the address-of operator (&)
  to provide the address of the variable. */
// we use '*' to declare pointer and in printing it copies value of variable and print it .
// and to initialize it with some other variable it is necessary to have '&"  before variable name
// so it can copies its address .
