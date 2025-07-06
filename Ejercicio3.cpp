/* 3.Suma de Diagonales: Desarrolle un programa que sume los elementos de las dos diagonales de una
matriz de 4x4 y muestre el resultado. */

#include <iostream>
using namespace std;

int main() {
    const int n = 4;
    int matriz[n][n];

    // Ingreso de datos
    cout << "Ingrese los valores de la matriz 4x4:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cout << "matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }

    // Aún no se suman las diagonales
    return 0;
}