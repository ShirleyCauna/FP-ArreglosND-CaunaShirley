/*10. Generador de Tablero de Buscaminas: Desarrolla un programa que genere un tablero inicial para
el juego de Buscaminas en una cuadrícula de 10x10. El programa debe: 
a) Crear aleatoriamente un tablero donde cada celda puede contener una mina (1) o estar vacía (0). 
b) Para cada celda, calcular y mostrar el número de minas en las ocho celdas adyacentes (no se
cuenta la celda misma). 
c) Mostrar el tablero original con las minas y el tablero con los números lado a lado. 
Nota: Recuerda que en Buscaminas, el número en una celda indica cuántas minas hay alrededor, no
incluyendo la propia celda.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N = 10;

void inicializarTablero(int tablero[N][N]) {
    srand(time(nullptr));
    const int probabilidadMina = 30;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            tablero[i][j] = (rand() % 100 < probabilidadMina) ? 1 : 0;
}

void mostrarTablero(int tablero[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << tablero[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int tablero[N][N];

    inicializarTablero(tablero);

    cout << "Tablero inicial con minas aleatorias:\n";
    mostrarTablero(tablero);

    // Aún no se cuenta minas adyacentes

    return 0;
}