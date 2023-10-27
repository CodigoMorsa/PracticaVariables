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

    string nombre;
    int edad;
    short codigoPostal;
    int numeroDNI;
    long telefono;
    float altura;
    double salario;
    bool enParo;
    char letraDNI, respuestaParo;

    cout << "Introduce el nombre del usuario: ";
    cin >> nombre;
    cout << "Nombre: " << nombre << "." << endl;

    cout << "Introduce la edad del usuario: ";
    cin >> edad;
    cout << "Edad: " << edad << " años" << endl;

    cout << "Introduce el codigo postal del usuario: ";
    cin >> codigoPostal;
    cout << "Codigo Postal: " << codigoPostal << "." << endl;

    cout << "Introduce el numero del DNI del usuario: ";
    cin >> numeroDNI;
    cout << "Numero DNI: " << numeroDNI << "." << endl;

    cout << "Introduce la letra del DNI: ";
    cin >> letraDNI;
    cout << "Letra: " << letraDNI << "." << endl;

    cout << "Introduce el número de telefono del usuario: ";
    cin >> telefono;
    cout << "Numero de telefono: " << telefono << "." << endl;

    cout << "Introduce altura del usuario: ";
    cin >> altura;
    cout << "El usuario mide " << altura << " metros." << endl;

    cout << "Introduce el salario del usuario en euros: ";
    cin >> salario;
    cout << "Salario: " << salario << "€" << endl;

    cout << "¿El usuario esta en paro? (s/n): ";
    cin >> respuestaParo;

    if (respuestaParo == 's')
    {
        enParo = true;
    }
    else
    {
        enParo = false;
    }

    cout << "____________________________________________________" << endl;
    cout << "Nombre: " << nombre << "." << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << "Codigo Postal: " << codigoPostal << "." << endl;
    cout << "Numero DNI: " << numeroDNI << "." << endl;
    cout << "Letra: " << letraDNI << "." << endl;
    cout << "Numero de telefono: " << telefono << "." << endl;
    cout << "El usuario mide " << altura << " metros." << endl;
    cout << "Salario: " << salario << "€" << endl;

    if (enParo)
    {
        cout << "El usuario esta en paro." << endl;
    }
    else
    {
        cout << "El usuario no esta en paro." << endl;
    }
    cout << "____________________________________________________" << endl;

    return 0;
}