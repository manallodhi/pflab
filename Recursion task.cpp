

//

#include <iostream>
using namespace std ;

int calculate(int x , int y ){

  if( x == 1 || y == 0) { // because value of 1 raise to the power 0 is 1 :
    return 1;
  }
  else {
    return x * calculate(x , y-1) ;
  }
}
int main(){
  int a = 4 ;
  int b = 3 ;
  int answer ;
  answer = calculate(a , b) ;
  cout << "value of " << a << " Raise to the power " << b << " is : " << answer ;

}
