#include <iostream>
#include <string>
using  namespace std;

struct student_data {
   string name ;
   int age ;
   float gpa ;
};
int main()
{   //Direct initialization method
    student_data s[2] = {{"Manal" , 19 , 3.8},{"Namra" , 20 , 3.9},};

 for(int i = 0 ; i <=1 ; i++){
    cout << "Name : " << s[i].name << endl ;
    cout << "Age : " << s[i].age << endl ;
    cout << "GPA : " << s[i].gpa << endl ;
 }
 return 0 ;
}
