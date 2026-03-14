#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Declaración de diferentes tipos de datos básicos
    string nombre;
    char inicial;
    int edad;
    float altura;

    // 2. Salida de datos (cout) y Entrada de datos (cin)
    cout << "--- Registro de Estudiante ---" << endl;

    cout << "Ingrese su primer nombre: ";
    cin >> nombre;

    cout << "Ingrese la inicial de su apellido: ";
    cin >> inicial;

    cout << "Ingrese su edad (en anios): ";
    cin >> edad;

    cout << "Ingrese su altura (en metros, ej. 1.75): ";
    cin >> altura;

    // 3. Mostrar los datos recopilados
    cout << "\n--- Datos Ingresados ---" << endl;
    cout << "Nombre: " << nombre << " " << inicial << "." << endl;
    cout << "Edad: " << edad << " anios" << endl;
    cout << "Altura: " << altura << " metros" << endl;

    return 0;
}
