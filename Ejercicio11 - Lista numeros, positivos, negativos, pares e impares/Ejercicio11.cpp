// 11. Hacer un programa para ingresar una lista de números que corta cuando se ingresa un cero y luego mostrar: 
//        • La cantidad de números primos.
//        • La cantidad de números pares
//        • La cantidad de positivos.
//        • La cantidad de negativos.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N, ConPos = 0, ConNeg = 0, ConPri = 0, ConPar = 0;
    bool Positivo = false;
    bool Negativo = false;
    int D, CD;

    cout << "Ingrese un numero: ";
    cin >> N;

    while (N != 0) {
        if (N > 0) {
            Positivo = true;
            ConPos++;
            CD = 0;
            D = 1;

            while (D <= N) {
                if (N % D == 0) {
                    CD++;
                }
                D++;
            }

            if (CD == 2) {
                ConPri++;
            }

            if (N % 2 == 0) {
                ConPar++;
            }
        }
        else {
            Negativo = true;
            ConNeg++;

            if (N % 2 == 0) {
                ConPar++;
            }
        }
        cout << "\nPresione '0' para finalizar el proceso.";
        cout << "\nIngrese otro numero: ";
        cin >> N;
    }

    if (Positivo || Negativo) {
        cout << "\nCantidad de numeros positivos: " << ConPos << endl;
        cout << "Cantidad de numeros negativos: " << ConNeg << endl;
        cout << "Cantidad de numeros primos: " << ConPri << endl;
        cout << "Cantidad de numeros pares: " << ConPar << endl;
    }
    else {
        cout << "\nNingun numero fue registrado." << endl;
    }
    return 0;
}