#include <iostream>
#include <string>

int main() {
    // Crear una cadena utilizando la clase string
    std::string miCadena = "La manipulación de strings en C++ es interesante.";

    // Utilizar la función substr() para obtener una subcadena
    std::string subcadena = miCadena.substr(3, 14); // Obtener una subcadena desde el índice 3 con longitud 14

    // Utilizar la función insert() para insertar otra cadena en la cadena
    miCadena.insert(22, "avanzada de ");

    // Imprimir la cadena resultante
    std::cout << "Cadena original: " << miCadena << std::endl;
    std::cout << "Subcadena obtenida: " << subcadena << std::endl;

    return 0;
}