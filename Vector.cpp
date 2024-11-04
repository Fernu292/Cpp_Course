#include <iostream>
#include <vector> // Incluir la biblioteca de vectores

int main() {
    // 1. Declarar un vector de enteros
    std::vector<int> numeros;

    // 2. Agregar elementos con push_back
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    // 3. Acceder a elementos usando el índice
    std::cout << "Elemento en el índice 1: " << numeros[1] << std::endl;
    std::cout << "Elemento en el índice 1: " << numeros.at(2) << std::endl;

    // 4. Acceder al primer y último elemento con front() y back()
    std::cout << "Primer elemento: " << numeros.front() << std::endl;
    std::cout << "Último elemento: " << numeros.back() << std::endl;

    // 5. Iterar sobre el vector usando un bucle for
    std::cout << "Elementos del vector: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 6. Insertar un elemento en una posición específica
    numeros.insert(numeros.begin() + 1, 15); // Inserta 15 en la posición 1

    // 7. Eliminar un elemento en una posición específica
    numeros.erase(numeros.begin() + 2); // Elimina el elemento en la posición 2

    // 8. Tamaño del vector
    std::cout << "Tamaño del vector: " << numeros.size() << std::endl;

    // 9. Verificar si el vector está vacío
    if (numeros.empty()) {
        std::cout << "El vector está vacío." << std::endl;
    } else {
        std::cout << "El vector no está vacío." << std::endl;
    }

    // 10. Limpiar el vector
    numeros.clear();
    std::cout << "Tamaño del vector después de clear(): " << numeros.size() << std::endl;

    return 0;
}
