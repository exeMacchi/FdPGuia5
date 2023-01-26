// 3. Hacer un programa que solicite la edad de un grupo de personas. El programa deberá pedir edades hasta 
//    que se ingrese una edad menor a 18 años. Deberá mostrar por pantalla cuántas personas mayores se registraron.


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int E, ConE = 0;

    cout << "Ingrese una edad: ";
    cin >> E;

    while (E >= 18) {
        ConE++;
        cout << "Ingrese otra edad: ";
        cin >> E;
    }

    if (ConE != 0) {
        cout << "\nCantidad de personas mayores: " << ConE << endl;
    }
    else {
        cout << "\nNinguna persona mayor de edad fue registrada." << endl;
    }
    return 0;
}
