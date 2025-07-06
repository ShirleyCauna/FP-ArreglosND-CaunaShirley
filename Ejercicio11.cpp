/* 11. Simulación de Propagación de Fuego: Cree un programa que simule la propagación de un incendio
en un bosque representado por una matriz de 10x10, donde los árboles pueden estar en diferentes
estados: vivos (0), quemándose (1), quemados (2). El programa debe actualizar el estado del bosque
en función de las siguientes reglas y mostrar el bosque en su estado inicial y después de la
propagación del fuego:
• Un árbol vivo (0) se convierte en quemándose (1) si al menos uno de sus vecinos está quemándose.
• Un árbol quemándose (1) se convierte en quemado (2) en la siguiente iteración.
• Un árbol quemado (2) permanece quemado.
   .
   .
   .
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N = 10, M = 10;

void imprimirBosque(int bosque[N][M]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << bosque[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void propagarFuego(int bosque[N][M]) {
    int nuevoBosque[N][M];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (bosque[i][j] == 0) {
                if ((i > 0 && bosque[i-1][j] == 1) ||
                    (i < N-1 && bosque[i+1][j] == 1) ||
                    (j > 0 && bosque[i][j-1] == 1) ||
                    (j < M-1 && bosque[i][j+1] == 1)) {
                    nuevoBosque[i][j] = 1;
                } else {
                    nuevoBosque[i][j] = 0;
                }
            } else if (bosque[i][j] == 1) {
                nuevoBosque[i][j] = 2;
            } else {
                nuevoBosque[i][j] = bosque[i][j];
            }
        }
    }

    // Actualizar bosque
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            bosque[i][j] = nuevoBosque[i][j];
}

int main() {
    srand(time(0));
    int bosque[N][M];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            bosque[i][j] = 0;

    int f = rand() % N;
    int c = rand() % M;
    bosque[f][c] = 1;

    cout << "Estado inicial:\n";
    imprimirBosque(bosque);

    propagarFuego(bosque);

    cout << "Despues de una iteracion:\n";
    imprimirBosque(bosque);

    return 0;
}
