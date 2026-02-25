/* data-types
    here the typeid()--> is the c++ inbuild function that is used
    to identitfy the varaible types linke int, float, char etc
    

*/

#include <iostream>
using namespace std;
int main() {
    // basic datatypes
    int x = 120;
    float y = 120.56;
    double z = 12345.4578;
    char alphabets = 'A';
    bool pass = true;
    bool fails = false;

    // printing the datatypes
    cout<<endl<<"x= "<<x;
    cout<<endl<<"y= "<<y;
    cout<<endl<<"z= "<<z;
    cout<<endl<<"alphabets= "<<alphabets;
    cout<<endl<<"pass= "<<pass;
    cout<<endl<<"fails= "<<fails;

    cout<<endl<<"x = "<<typeid(x).name();
    cout<<endl<<"y = "<<typeid(y).name();                                     
    cout<<endl<<"y = "<<typeid(z).name();                                     
    cout<<endl<<"alphabets = "<<typeid(alphabets).name();                                     
    cout<<endl<<"pass = "<<typeid(pass).name();                                     
    cout<<endl<<"fials = "<<typeid(fails).name();                                     
                                         

    return 0;
}