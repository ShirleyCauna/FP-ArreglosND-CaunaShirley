/* 7. Rotación de una Imagen Representada por una Matriz: Escriba un programa que rote una matriz
de 4x4, representando una imagen, 90 grados en sentido horario. 
Matriz:                                               Matriz rotada 90 grados en sentido horario:
1  2  3  4                                            4  9  5  1
5  6  7  8                                            5  1  6  2
9  1  2  3                                            6  2  7  3
4  5  6  7                                            7  3  8  4  */

#include <iostream>
using namespace std;

void rotar90(int matriz[][4], int matrizR[][4]) {
    // Transponer
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            matrizR[j][i] = matriz[i][j];

    // Reflejar horizontalmente
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 2; j++) {
            int aux = matrizR[i][j];
            matrizR[i][j] = matrizR[i][3 - j];
            matrizR[i][3 - j] = aux;
        }
}

int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 2, 3},
        {4, 5, 6, 7}
    };
    int matrizR[4][4];

    rotar90(matriz, matrizR);

    cout << "Matriz original:\t\tMatriz rotada 90 grados:\n";
    for (int i = 0; i < 4; i++) {
        // original
        for (int j = 0; j < 4; j++)
            cout << matriz[i][j] << " ";
        cout << "\t\t";
        // rotada
        for (int j = 0; j < 4; j++)
            cout << matrizR[i][j] << " ";
        cout << endl;
    }

    return 0;
}