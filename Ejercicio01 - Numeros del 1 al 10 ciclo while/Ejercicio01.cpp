// 1. Hacer un programa para mostrar los números del 1 al 10. No se debe realizar ningún pedido de datos. USANDO WHILE.

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int N = 1;
    while (N <= 10) {
        if (N < 10) {
            cout << N << ", ";
        }
        else {
            cout << N << "." << endl;
        }
        N++;
    }
    return 0;
}
