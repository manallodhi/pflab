#include <iostream>
using namespace std ;

int main(){

   const int  *ptr1 ;

   int x = 10 ;
   ptr1 = &x ;
   cout << *ptr1 << endl ;
   // ptr1 = &y ;
   cout << *ptr1 ;
   //*ptr1 = 20 ; // Error: cannot modify the value
  return 0 ;
}
