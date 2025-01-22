
#include <iostream>
using namespace std ;

void swaps(int *, int *);
int main() {
  int x = 10 ;
  int y = 20 ;
  cout << "Values before swapping : x = " << x << " y = " << y  << endl ;
  swaps(&x , &y) ;
  cout << "Values after swapping : x = " << x << " y = " << y ;

  return 0 ;
}
void swaps(int *a , int *b)
{
   int var ;

   var=*a;
   *a=*b;
   *b=var;

}
