#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv){
    
    int array[5] = {1,2,3,4,5};

    cout << "\n\tArray: " << array << endl;
    
    int *ptr {array};

    cout << "\tPointer: " << ptr << endl;

    cout << "\n\tArray subscript notation ------------------------" << endl;
    cout << "\t" << array[0] << " ";
    cout << array[1] << " ";
    cout << array[2] << endl;

    cout << "\n\tPointer subscript notation ----------------------" << endl;
    cout << "\t" << ptr[0] << " ";
    cout << ptr[1] << " ";
    cout << ptr[2] << endl;

    cout << "\n\tPointer offset notation -------------------------" << endl;
    cout << "\t" <<*ptr << " ";
    cout << *(ptr+1) << " ";
    cout << *(ptr+2) << endl;

    cout << "\n\tArray offset notation --------------------------" << endl;
    cout << "\t" << *array << " ";
    cout << *(array+1) << " ";
    cout << *(array+2) << endl;

    cout << "\n\n";

    return 0;
}
