#include <iostream>

using namespace std;

void swapPointers(int* ptr1, int* ptr2){
    // -- Write your code below this line
    
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
    
    // -- Write your code above this line
}

int main(int argc, char **argv){
    
    cout << "\n\tSwaped pointers\n";
    int a{5}, b{10};
    int* ptrA{&a}, *ptrB{&b};
    
    cout << "\tBefore: " << *ptrA << ", " << *ptrB << endl;

    swapPointers(ptrA, ptrB);

    cout << "\tAfter: " << *ptrA << ", " << *ptrB << endl;

    return 0;
}
