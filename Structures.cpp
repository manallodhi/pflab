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
    student_data s1 = {"Manal" , 19 , 3.8};


    cout << "Name : " << s1.name << endl ;
    cout << "Age : " << s1.age << endl ;
    cout << "GPA : " << s1.gpa << endl ;

 return 0 ;
}
