


#include <iostream>
using namespace std ;

int main() {
   cout << "Start of Program . " << endl ;
   jump: { // Label
       cout << "Jumped to this line ! " << endl ;
   } // optional if there is only one statement
   goto jump; // jump to the label jump

   cout << "This line is skipped " << endl ;


  return 0 ;
}

