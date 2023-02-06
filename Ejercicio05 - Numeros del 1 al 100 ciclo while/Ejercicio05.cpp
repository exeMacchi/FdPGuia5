// 5. Hacer un programa que muestre los números del 1 al 100 de 5 en 5. Ejemplo: 0, 5, 10, 15, 20.... 100. Usando While.

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int N = 0;

    while (N <= 100) {
        if (N < 100) {
            cout << N << ", ";
        }
        else {
            cout << N << "." << endl;
        }
        N += 5;
    }

    return 0;
}
