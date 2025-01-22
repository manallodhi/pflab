
#include <iostream>
using namespace std ;

int factorial(int n) {
  if(n == 0 || n == 1) {
    return 1;
  }
  else {
    return n * factorial(n-1) ; // calls the function itself again and again
                                // until the numbers
  }
}
int main(){
  int n;
  cout << "Calculate factorial  "  << endl ;
  cout << "Enter the number : " ;
  cin >> n ;
  int result ;
  result = factorial(n) ;
  cout << "Factorial of " << n << " is " << result ;
  return 0 ;
}
