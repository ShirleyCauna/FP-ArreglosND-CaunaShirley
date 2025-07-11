/*
5. Buscar el Máximo y Mínimo: Escriba un programa que encuentre el valor máximo y el valor 
mínimo en una matriz de 4x4, indicando sus posiciones.
*/

#include <iostream>
using namespace std;

void buscarMayorMinimo(int matriz[4][4]) {
    int maximo = matriz[0][0];
    int minimo = matriz[0][0];
    int maxFila = 0, maxCol = 0;
    int minFila = 0, minCol = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > maximo) {
                maximo = matriz[i][j];
                maxFila = i;
                maxCol = j;
            }
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
                minFila = i;
                minCol = j;
            }
        }
    }

    cout << "\nEl valor maximo es " << maximo << " y se encuentra en: Fila " << maxFila << ", Columna " << maxCol << endl;
    cout << "El valor minimo es " << minimo << " y se encuentra en: Fila " << minFila << ", Columna " << minCol << endl;
}

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

    buscarMayorMinimo(matriz);

    return 0;
}