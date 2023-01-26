// 4. Hacer un programa que solicite dos números y luego muestre los números entre el menor y el mayor de ellos. 
//    Acordate, usando While.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int A, B, May, Men;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "Ingrese el segundo numero: ";
    cin >> B;

    if (A > B) {
        May = A;
        Men = B;
    }
    else if (B > A) {
        May = B;
        Men = A;
    }
    else {
        cout << "\n" << A << endl;
        return 0;
    }

    cout << endl;

    while (Men <= May) {
        if (Men != May) {
            cout << Men << ", ";
        }
        else {
            cout << Men << "." << endl;
        }
        Men++;
    }

    return 0;
}
