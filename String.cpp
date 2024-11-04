#include <iostream>
#include <string>

#define MAX 100

int main() {

    std::string nombre;
    std::getline(std::cin, nombre);
    
    std::cout << nombre.length() << std::endl;

    nombre.resize(4);

    std::cout << nombre << std::endl;

    std::string inverso;

    for(auto it = nombre.rbegin(); it != nombre.rend(); it++) {
        inverso += *it; 
    }

    std::cout << inverso << std::endl;

    return 0;
}