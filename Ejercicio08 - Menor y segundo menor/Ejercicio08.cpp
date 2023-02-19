// 8. Hacer un programa que solicite una lista de números que corta cuando se ingresa un cero y luego mostrar 
//    por pantalla el menor y el segundo menor.


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N, i = 0, Pm, Sm;
    bool BanPm = false;
    bool BanSm = false;

    cout << "Ingrese un numero: ";
    cin >> N;

    while (N != 0)
    {
        if (i == 0)
        {
            BanPm = true;
            Pm = N;
            i++;
        }
        else if (i == 1)
        {
            BanSm = true;
            if (N < Pm)
            {
                Sm = Pm;
                Pm = N;
            }
            else
            {
                Sm = N;
            }
            i++;
        }
        else if (N < Pm)
        {
            Sm = Pm;
            Pm = N;
        }
        else if (N < Sm)
        {
            Sm = N;
        }

        if (i == 1)
        {
            cout << "\nIngrese otro numero: ";
            cin >> N;
        }
        else
        {
            cout << "\nPresione '0' para finalizar el proceso.";
            cout << "\nIngrese otro numero: ";
            cin >> N;
        }
    }

    if (BanPm && BanSm)
    {
        cout << "\nPrimer menor: " << Pm << endl;
        cout << "Segundo menor: " << Sm << endl;
    }
    else
    {
        cout << "\nError: falta numero para comparacion." << endl;
    }
    return 0;
}