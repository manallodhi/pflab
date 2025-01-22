#include <iostream>
using namespace std ;

int main() {
   cout << "Start of Program . " << endl ;

   /*jump: { // Label
       cout << "Jumped to this line ! " << endl ; // infinity
    }*/


   goto jump; // jump to the label jump

   cout << "This line is skipped " << endl ;

   jump: { // Label
       cout << "Jumped to this line ! " << endl ;
   } // optional if there is only one statement

  return 0 ;
}

