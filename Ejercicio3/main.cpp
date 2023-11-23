#include <iostream>
#include <string>

int main() {
    // Crear dos cadenas utilizando la clase string
    std::string cadena1 = "Hola, ";
    std::string cadena2 = "mundo!";

    // Concatenar las dos cadenas usando el operador '+'
    std::string resultado = cadena1 + cadena2;

    // Imprimir la cadena resultante
    std::cout << "Cadena resultante: " << resultado << std::endl;

    return 0;
}