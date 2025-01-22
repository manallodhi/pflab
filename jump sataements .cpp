
/*You are tasked with implementing a basic user authentication system.
The program will:Ask the user to enter a password.If the password is correct,
 display a welcome message and exit the program using return.
 If the password is incorrect, use a goto statement to allow the user to retry.
 Allow the user up to 3 attempts. If all attempts fail, exit the program with an error message.*/

 #include <iostream>
 using namespace std ;

 int main (){

 int attempt = 1 ;
 int correct_pass = 1234567 ;
 int Pass ;

 b :
 if(attempt <= 3 ) {
 cout << "Enter your Password : " ;
 cin >> Pass ;

 if(Pass == correct_pass){
    cout << "Welcome ! " << endl ;
    goto end ;
 }
  else {

  cout << "Enter correct pass " << endl  ;
  attempt++;
  goto b;
 }
 }
    end:
    return 0 ;
  }
