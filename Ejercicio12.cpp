/* 12. Juego de la Vida de Conway: Desarrolla un programa que simule el "Juego de la Vida" de Conway
en un tablero de 10x10. El programa debe:
a) Crear aleatoriamente un tablero inicial donde cada celda puede estar viva (1) o muerta (0).
b) Calcular el estado del tablero en la segunda generacion.
c) Mostrar el tablero inicial y el tablero de la segunda generacion lado a lado.
En el "Juego de la Vida", el estado de cada celda en la proxima generacion se determina por el
numero de celdas vivas adyacentes:
1. Una celula viva con menos de dos vecinos vivos muere (subpoblacion).
2. Una celula viva con dos o tres vecinos vivos sigue viva.
3. Una celula viva con mas de tres vecinos vivos muere (sobrepoblacion).
4. Una celula muerta con exactamente tres vecinos vivos se convierte en una celula viva
(reproduccion). */

#include <iostream>
#include <cstdlib>
#include <ctime>
#define max 10

using namespace std;

void inicializar(int tablero[max][max]) {
    srand(time(0));
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < max; j++) {
            tablero[i][j] = rand() % 2;
        }
    }
}

int contarVecinos(int tablero[max][max], int x, int y) {
    int cont = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (i == 0 && j == 0) continue;
            int ni = x + i, nj = y + j;
            if (ni >= 0 && ni < max && nj >= 0 && nj < max) {
                cont += tablero[ni][nj];
            }
        }
    }
    return cont;
}

void siguienteGeneracion(int actual[max][max], int siguiente[max][max]) {
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < max; j++) {
            int vecinos = contarVecinos(actual, i, j);
            if (actual[i][j] == 1) {
                if (vecinos < 2 || vecinos > 3)
                    siguiente[i][j] = 0;
                else
                    siguiente[i][j] = 1;
            } else {
                if (vecinos == 3)
                    siguiente[i][j] = 1;
                else
                    siguiente[i][j] = 0;
            }
        }
    }
}

void imprimirTablero(const int tablero[max][max]) {
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < max; j++) {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int actual[max][max];
    int siguiente[max][max];

    inicializar(actual);
    siguienteGeneracion(actual, siguiente);

    cout << "Tablero Inicial:\n";
    imprimirTablero(actual);

    cout << "\nSegunda Generacion:\n";
    imprimirTablero(siguiente);

    return 0;
}