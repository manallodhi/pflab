#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b ;
}
int main(){
    int result = add(5,7);
    cout << "sum = " << result << endl ;
    return 0;
}
