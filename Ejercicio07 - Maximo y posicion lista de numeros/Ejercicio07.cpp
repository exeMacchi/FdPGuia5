// 7. Hacer un programa que solicite una lista de números que corta cuando se ingresa un cero y luego mostrar por 
//    pantalla el máximo de ellos y la posición en la que fue ingresado.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N, Pos = 0, Max, PosMax;

    cout << Pos + 1 << ". Ingrese un numero: ";
    cin >> N;

    while (N != 0)
    {
        if (Pos == 0)
        {
            Max = N;
            Pos++;
            PosMax = Pos;
        }
        else if (N > Max)
        {
            Max = N;
            Pos++;
            PosMax = Pos;
        }
        else
        {
            Pos++;
        }
        cout << "\nPresione '0' para finalizar el proceso.";
        cout << "\n" << Pos + 1 << ". Ingrese otro numero: ";
        cin >> N;
    }

    if (Pos != 0)
    {
        cout << "\nMaximo: " << Max << endl;
        cout << "Posicion: " << PosMax << endl;
    }
    else
    {
        cout << "\nError: ningun numero fue registrado." << endl;
    }
    return 0;
}