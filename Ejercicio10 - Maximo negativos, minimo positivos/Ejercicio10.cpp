// 10. Hacer un programa que solicite una lista de números que corta cuando se ingresa un cero y luego emitir por 
//     pantalla el máximo de los números negativos y el mínimo de los números positivos.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N, MaxNeg, MinPos;
    bool Positivo = false;
    bool Negativo = false;

    cout << "Ingrese un numero: ";
    cin >> N;

    while (N != 0)
    {
        if (N > 0)
        {
            if (!Positivo)
            {
                MinPos = N;
                Positivo = true;
            }
            else if (N < MinPos)
            {
                MinPos = N;
            }
        }
        else
        {
            if (!Negativo)
            {
                MaxNeg = N;
                Negativo = true;
            }
            else if (N > MaxNeg)
            {
                MaxNeg = N;
            }
        }
        cout << "\nPresione '0' para finalizar el proceso.";
        cout << "\nIngrese otro numero: ";
        cin >> N;
    }

    if (Positivo && Negativo)
    {
        cout << "\nMinimo de los positivos: " << MinPos << endl;
        cout << "Maximo de los negativos: " << MaxNeg << endl;
    }
    else if (Positivo)
    {
        cout << "\nMinimo de los positivos: " << MinPos << endl;
        cout << "Ningun numero negativo fue registrado." << endl;
    }
    else if (Negativo)
    {
        cout << "\nMaximo de los negativos: " << MaxNeg << endl;
        cout << "Ningun numero positivo fue registrado." << endl;
    }
    else
    {
        cout << "\nError: ningun numero fue registrado." << endl;
    }
    return 0;
}