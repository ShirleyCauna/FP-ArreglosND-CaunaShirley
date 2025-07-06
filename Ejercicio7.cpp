/* 7. Rotación de una Imagen Representada por una Matriz: Escriba un programa que rote una matriz
de 4x4, representando una imagen, 90 grados en sentido horario. 
Matriz:                                               Matriz rotada 90 grados en sentido horario:
1  2  3  4                                            4  9  5  1
5  6  7  8                                            5  1  6  2
9  1  2  3                                            6  2  7  3
4  5  6  7                                            7  3  8  4  */


#include <iostream>
using namespace std;

int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 2, 3},
        {4, 5, 6, 7}
    };

    cout << "Matriz original:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Aún no se aplica rotación

    return 0;
}
