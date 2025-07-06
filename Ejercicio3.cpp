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

    int DP = 0, DS = 0;

    for (int i = 0; i < n; i++) {
        DP += matriz[i][i];               // Diagonal principal
        DS += matriz[i][n - 1 - i];       // Diagonal secundaria
    }

    cout << "\nContenido de la matriz:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << matriz[i][j] << " ";
        cout << endl;
    }

    cout << "\nSuma de la diagonal principal: " << DP << endl;
    cout << "Suma de la diagonal secundaria: " << DS << endl;

    return 0;
}