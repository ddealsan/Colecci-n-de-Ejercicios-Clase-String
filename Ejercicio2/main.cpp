#include <iostream>
#include <string>
using namespace std;

int main (){
    string miCadena = "Hola, mundo!";
    cout << "Tamaño de la cadena: " << miCadena.size() <<endl;
    if (miCadena.empty()) {
        std::cout << "La cadena está vacía." << std::endl;
    } else {
        std::cout << "La cadena NO está vacía." << std::endl;
    }
}
