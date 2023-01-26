// 2. Hacer un programa para mostrar los números del 10 al 1. No se debe realizar ningún pedido de datos. USANDO WHILE.

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int N = 10;

    while (N > 0) {
        if (N > 1) {
            cout << N << ", ";
        }
        else {
            cout << N << "." << endl;
        }
        N--;
    }

    return 0;
}
