/* 9. Programa que imprime un cuadrado latino de orden N. Un cuadrado latino de orden N es una matriz
cuadrada en la que la primera fila contiene los N primeros numeros naturales y cada una de las
siguientes N-1 filas contiene la rotacion de la fila anterior un lugar a la derecha. Ejemplo: Cuadrado
latino de orden 4.
1 2 3 4
4 1 2 3
3 4 1 2
2 3 4 1 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Introduce el orden del cuadrado latino (N): ";
    cin >> N;

    if (N > 0) {
        cout << "Primera fila del cuadrado latino:\n";
        for (int j = 0; j < N; j++) {
            cout << j + 1 << " ";
        }
        cout << endl;
    } else {
        cout << "Numero de orden invalido" << endl;
    }

    return 0;
}