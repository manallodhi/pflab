
#include <iostream>
using namespace  std ;

int main() {
 int count = 1 ;

 loop:
 if(count > 5) // only accept one statement without {} after if condition .
    goto end ;
 cout << "count: " << count << endl ;
 count++ ;

 goto loop; // jump
 end:
 cout << "End of loop. " << endl ;

   return 0 ;
}
