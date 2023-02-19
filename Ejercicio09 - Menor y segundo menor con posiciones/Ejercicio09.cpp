// 9. Realizar el nuevamente el ejercicio 8 pero ahora debe devolver además la posición en la que fue encontrado 
//    cada uno de los mínimos.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N, i = 0, Pm, Sm, PosPm, PosSm;
    bool BanPm = false;
    bool BanSm = false;

    cout << i + 1 << ". Ingrese un numero: ";
    cin >> N;

    while (N != 0)
    {
        if (i == 0)
        {
            BanPm = true;
            Pm = N;
            PosPm = i + 1;
            i++;
        }
        else if (i == 1)
        {
            BanSm = true;
            if (N < Pm)
            {
                Sm = Pm;
                PosSm = PosPm;
                Pm = N;
                PosPm = i + 1;
            }
            else
            {
                Sm = N;
                PosSm = i + 1;
            }
            i++;
        }
        else if (N < Pm)
        {
            Sm = Pm;
            PosSm = PosPm;
            Pm = N;
            PosPm = i + 1;
            i++;
        }
        else if (N < Sm)
        {
            Sm = N;
            PosSm = i + 1;
            i++;
        }
        else
        {
            i++;
        }

        if (i == 1)
        {
            cout << "\n" << i + 1 << ". Ingrese otro numero: ";
            cin >> N;
        }
        else
        {
            cout << "\nPresione '0' para finalizar el proceso.";
            cout << "\n" << i + 1 << ". Ingrese otro numero: ";
            cin >> N;
        }
    }

    if (BanPm && BanSm)
    {
        if (Pm != Sm)
        {
            cout << "\nEl primer menor es " << Pm << " y su posicion es " << PosPm << "." << endl;
            cout << "El segundo menor es " << Sm << " y su posicion es " << PosSm << "." << endl;
        }
        else
        {
            cout << "\nTanto el primero como el segundo menor son " << Pm << " y sus respectivas posiciones son "
                << PosPm << " y " << PosSm << "." << endl;
        }

    }
    else
    {
        cout << "\nError: falta numero de comparacion." << endl;
    }
    return 0;
}