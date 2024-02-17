// Dynamic Memory Allocation

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {

    cout<<"\n=================================="<<endl;

    // New keyword allocate memory in the heap

    int *int_ptr{nullptr};

    int_ptr = new int; // Allocate an integer on the heap

    cout<<"\n"<<int_ptr<<endl; 
    cout<<*int_ptr<<endl; // Garbage

    *int_ptr = 100;

    cout<<*int_ptr<<endl; // 100

    // Frees the allocated storage

    delete int_ptr;

    cout<<"\n=================================="<<endl;

    // Using new [] to allocate storage for an array

    int *array_ptr (nullptr);
    size_t size {};

    cout<<"\nHow big do you want the array: ";
    cin>>size;

    array_ptr = new int[size]; // Allocate array on the heap

    // Delete syntaxis for allocaded array 

    delete [] array_ptr;

    cout << array_ptr << endl;

    cout<<"\n=================================="<<endl;


    return 0;
}
