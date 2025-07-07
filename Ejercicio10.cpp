/*10. Generador de Tablero de Buscaminas: Desarrolla un programa que genere un tablero inicial para
el juego de Buscaminas en una cuadricula de 10x10. El programa debe: 
a) Crear aleatoriamente un tablero donde cada celda puede contener una mina (1) o estar vacia (0). 
b) Para cada celda, calcular y mostrar el numero de minas en las ocho celdas adyacentes (no se
cuenta la celda misma). 
c) Mostrar el tablero original con las minas y el tablero con los numeros lado a lado. 
Nota: Recuerda que en Buscaminas, el numero en una celda indica cuantas minas hay alrededor, no
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

void contarMinasAdyacentes(int tablero[N][N], int tableroNumeros[N][N]) {
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            if (tablero[i][j] == 1) {
                tableroNumeros[i][j] = 1;
            } else {
                int minas = 0;
                for (int k = 0; k < 8; k++) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if (ni >= 0 && ni < N && nj >= 0 && nj < N && tablero[ni][nj] == 1)
                        minas++;
                }
                tableroNumeros[i][j] = minas;
            }
        }
}

void mostrarTablerosLadoALado(int tablero1[N][N], int tablero2[N][N]) {
    cout << "Tablero Original\t\tTablero con Conteo de Minas\n";
    for (int i = 0; i < N; i++) {
        // Original
        for (int j = 0; j < N; j++)
            cout << tablero1[i][j] << " ";
        cout << "\t\t";
        // Conteo
        for (int j = 0; j < N; j++)
            cout << tablero2[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int tablero[N][N], tableroNumeros[N][N];

    inicializarTablero(tablero);
    contarMinasAdyacentes(tablero, tableroNumeros);
    mostrarTablerosLadoALado(tablero, tableroNumeros);

    return 0;
}