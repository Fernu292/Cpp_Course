#include <iostream>


int main(int argc, char **argv){
    
   // Declaration of variables
   // Datatype Name;

    int number;

    // Initializing variables
    
    int age; // Unitialized
    float fnumber = 2.19201; // C-Like initialization
    double PI (3.1415918292001); // Constructor initialization
    int age1{21}; // C++11 list initialization syntax

    // Best practice is declare and initialize a variable
    // where we need it

    std::cout << "\n\tEnter the width of the room: ";
    int room_width(0);
    std::cin >> room_width;

    std::cout << "\tEnter the length of the room: ";
    int room_length(0);
    std::cin >> room_length;

    std::cout << "\tThe area of the room is: " << room_length*room_width << "m2" << std::endl;
    std::cout << std::endl;


    return 0;
}
