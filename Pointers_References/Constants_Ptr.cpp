#include <iostream>

using namespace std;

const float e = 2.7291;

int main(){
    //Defining a pointer to a constant    
    const float *ptr_e{&e};
    cout << "\n\t" << ptr_e << endl;
    cout << "\t" << *ptr_e << endl;
    
    ptr_e = nullptr; // OK
    // *ptr_e = 10; // ERROR

    return 0;
}
