#include <iostream>
#include <string>

int main() {
    // Crear una cadena utilizando la clase string
    std::string miCadena = "La programación en C++ es divertida.";

    // Utilizar la función find() para buscar una subcadena
    std::size_t posicion = miCadena.find("C++");

    // Imprimir el índice de inicio de la subcadena
    if (posicion != std::string::npos) {
        std::cout << "La subcadena 'C++' comienza en el índice: " << posicion << std::endl;

        // Utilizar la función replace() para reemplazar la subcadena por otra
        miCadena.replace(posicion, 3, "Cplusplus");

        // Imprimir la cadena resultante
        std::cout << "Cadena resultante: " << miCadena << std::endl;
    } else {
        std::cout << "La subcadena no se encontró." << std::endl;
    }

    return 0;
}