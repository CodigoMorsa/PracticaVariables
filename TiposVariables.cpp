/*
    TIPOS DE VARIABLES

        byte: -128 a 127
        short: -32768 a 32767
        int: -2147486648 a 2147486647
        long: -9223372036854775808 a 9223372036854775807
        float: 3.4E-38 a 3.4+38
        double: 1.7E-308 a 1.7E+308
        boolean: true/false
        char: un solo caracter
        string: una cadena de caracteres*/

#include <iostream>
using namespace std;

int main()
{
    string nom_usu = "Roberto Anton";
    int edad{25};
    double salario;

    cout << "Introduce salario del empleado";
    cin >> salario;
    cout << "introduce el nombre del empleado";
    cin >> nom_usu;
    cout << "Datos del empleado" << endl;
    cout << "   Nombre: " << nom_usu << "." << endl;
    cout << "   Salario " << salario << " euros";

    return 0;
}