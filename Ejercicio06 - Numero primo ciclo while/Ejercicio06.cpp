// 6. Hacer un programa que solicite UN número y luego calcule y emita un cartel aclaratorio si el mismo es primo 
//    o no es primo. Usando While.


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N, D = 1, Cont = 0;

    cout << "Ingrese un numero: ";
    cin >> N;

    while (D <= N) {
        if (N % D == 0) {
            Cont++;
        }
        D++;
    }

    if (Cont == 2) {
        cout << "\nEl numero es primo." << endl;
    }
    else {
        cout << "\nEl numero no es primo." << endl;
    }
    return 0;
}
