
#include <iostream>
using namespace  std ;

int main() {
 int count = 1 ;

 loop:
 if(count > 5)
 goto end ;
 cout << "count: " << count << endl ;
 count++ ;

 goto loop;
 end:
 cout << "End of loop. " << endl ;

   return 0 ;
}
