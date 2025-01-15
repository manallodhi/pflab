
#include <iostream>
using namespace std ;

int main() {
   cout << "Start of Program . " << endl ;

   goto jump; // jump to the label jump

   cout << "This line is skipped " << endl ;

   jump:
       cout << "Jumped to this line ! " << endl ;

  return 0 ;
}
