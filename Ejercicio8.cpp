/* 8. Espiral de Matriz: Escribe un programa que recorra los elementos de una matriz cuadrada de 5x5
en orden espiral. El recorrido debe comenzar en la esquina superior izquierda de la matriz y avanzar
en sentido horario, imprimiendo los elementos en el orden en que se encuentran siguiendo un camino
espiral. 
Matriz:
1  2  3  4  5
6  7  8  9  10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

Ejemplo de salida:
Recorrido en espiral:
1 2 3 4 5 10 15 20 25 24 23 22 21 16 11 6 7 8 9 14 19 18 17 12 13
 */

#include <iostream>
using namespace std;

int main() {
    int matriz[5][5] = {
        {1,  2,  3,  4,  5},
	{6,  7,  8,  9,  10},
	{11, 12, 13, 14, 15},
	{16, 17, 18, 19, 20},
	{21, 22, 23, 24, 25}
    };

    cout << "Matriz de orden 5:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    int filaInicio = 0, filaFin = 4;
    int columnaInicio = 0, columnaFin = 4;

    cout << "\nRecorrido en espiral:\n";
    while (filaInicio <= filaFin && columnaInicio <= columnaFin) {
        // Fila superior
        for (int j = columnaInicio; j <= columnaFin; j++)
            cout << matriz[filaInicio][j] << " ";
        filaInicio++;

        // Columna derecha
        for (int i = filaInicio; i <= filaFin; i++)
            cout << matriz[i][columnaFin] << " ";
        columnaFin--;

        // Fila inferior
        if (filaInicio <= filaFin) {
            for (int j = columnaFin; j >= columnaInicio; j--)
                cout << matriz[filaFin][j] << " ";
            filaFin--;
        }

        // Columna izquierda
        if (columnaInicio <= columnaFin) {
            for (int i = filaFin; i >= filaInicio; i--)
                cout << matriz[i][columnaInicio] << " ";
            columnaInicio++;
        }
    }

    cout << endl;
    return 0;
}