/* Variable--->creating and initialization of variable 
    accessing and updation of variables

*/
#include <iostream>
using namespace std;
int main() {

    // creating of varaible;
    double num1,num2,num3;
    // initialization of variable 
    num1 = 12.34;
    num2 = 33.33;
    num3 = 89.98;
    // printing variables and also called as accessing the variables
    cout<<endl<<"num1= "<<num1;
    cout<<endl<<"num2= "<<num2;
    cout<<endl<<"num3= "<<num3;
    
    // updation of variables 
    char alpha = 'A';
    cout<<endl<<"alpha= "<<alpha;
    alpha = 'B';
    cout<<endl<<"alpha= "<<alpha;

    // constant variable 
    const int pi = 3.14;
    cout<<"pi = "<<pi;
    // try to change of pi value and it throws error
    pi = 3.142;
    cout<<endl<<"pi= "<<pi;


    return 0;
}

