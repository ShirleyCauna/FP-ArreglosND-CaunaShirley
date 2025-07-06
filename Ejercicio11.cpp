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

int main() {
    srand(time(0));
    int bosque[N][M];

    // Inicializa todo el bosque con árboles vivos
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            bosque[i][j] = 0;

    // Un árbol aleatorio empieza quemándose
    int f = rand() % N;
    int c = rand() % M;
    bosque[f][c] = 1;

    cout << "Estado inicial del bosque:\n";
    imprimirBosque(bosque);

    // Aún no se propaga el fuego
    return 0;
}
