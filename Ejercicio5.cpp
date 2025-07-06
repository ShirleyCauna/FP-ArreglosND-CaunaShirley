/*
5. Buscar el Máximo y Mínimo: Escriba un programa que encuentre el valor máximo y el valor 
mínimo en una matriz de 4x4, indicando sus posiciones.
*/

#include <iostream>
using namespace std;

int main() {
    int matriz[4][4] = {
        {1, 5, 3, 4},
        {9, 2, 7, 8},
        {6, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Matriz:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Aún no se calcula máximo ni mínimo

    return 0;
}